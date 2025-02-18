
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
struct TrieNode {
  bool wordEnd;
unordered_map<char, TrieNode*> children;
TrieNode() : wordEnd(false) {}
};
class Trie {
  TrieNode* root;
  public:
  Trie() {
    root = new TrieNode();
  }
  void insert(string word){
    TrieNode*temp=root;
    for(auto&a:word){
      if(temp->children.find(a)==temp->children.end()){
        temp->children[a]=new TrieNode();
      }
    temp=temp->children[a];
    }
    temp->wordEnd=true;
  }

   void findAllPrefixOccurences(string word,vector<string>&res){
      TrieNode*temp=root;
      for(auto&a:word){
        if(temp->children.find(a)==temp->children.end())return;
        temp=temp->children[a];
      }
      getAllFromHere(word,temp,res);
   }

   
   void getAllFromHere( string &cur,TrieNode*temp ,vector<string>&res){
         
       if(temp->wordEnd){
        res.push_back(cur);
       }
      for(auto&a:temp->children){
          cur+=a.first;
          getAllFromHere(cur,a.second,res);
          cur.pop_back();
      }
   }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        ///////////////////Trie
        Trie trie;
        for(auto&word:products)trie.insert(word);
        ////////////////////////
        vector<vector<string>>res;
        vector<string>cur;
        string curWord;
        for(auto&a:searchWord){
            curWord+=a;
            trie.findAllPrefixOccurences(curWord,cur);
                sort(cur.begin(),cur.end());
            if(cur.size()>3){
               res.push_back(vector<string>(cur.begin(),cur.begin()+3));
            }else res.push_back(cur);
           
            cur.clear();
        }
        return res;
    }
};