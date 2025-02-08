class NumberContainers {
    unordered_map<int,set<int>>occur;
    unordered_map<int,int>idx;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(idx.find(index)!=idx.end()){
            int cur=idx[index];
            occur[cur].erase(index);
            if(occur[cur].size()==0)occur.erase(cur);
        }
        idx[index]=number;
        occur[number].insert(index);
    }
    
    int find(int number) {
        if(occur.find(number)!=occur.end()) return *occur[number].begin();
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */