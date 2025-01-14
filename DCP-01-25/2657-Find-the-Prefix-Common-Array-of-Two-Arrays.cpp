class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>preA;
        unordered_set<int>preB;
        vector<int>res(A.size());
        int cnt=0;
        for(int i=0;i<A.size();i++){
            preA.insert(A[i]);
            preB.insert(B[i]);
            cnt+=preA.count(B[i]);
            cnt+=preB.count(A[i]);
            if(A[i]==B[i])cnt--;
            res[i]=cnt;
        }
        return res;
    }
};