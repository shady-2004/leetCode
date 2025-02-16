class Solution {
    bool permu(vector<int>& cur, vector<int>& res, vector<bool>& visited, int n, int i = 0) {
        if (i >= cur.size()) {
            if (res.empty() || cur > res) res = cur;
            return true;
        }

        while (i < cur.size() && cur[i] != -1) i++;
        if (i >= cur.size()) return false;

        for (int k = n; k >= 1; k--) {
            if (visited[k]) continue;  
            
            if (k == 1) {  
                cur[i] = 1;
                visited[1] = true;

                int next = i + 1;
                while (next < cur.size() && cur[next] != -1) next++;

                if(permu(cur, res, visited, n, next)) return true;

                cur[i] = -1;
                visited[1] = false;
            } else { 
                if (i + k < cur.size() && cur[i + k] == -1) {
                    cur[i] = k;
                    cur[i + k] = k;
                    visited[k] = true;

                    int next = i + 1;
                    while (next < cur.size() && cur[next] != -1) next++;

                   if(permu(cur, res, visited, n, next)) return true;

                    cur[i] = -1;
                    cur[i + k] = -1;
                    visited[k] = false;
                }
            }
        }
        return false;
    }

public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> cur(2 * n - 1, -1);
        vector<int> res;
        vector<bool> visited(n + 1, false);
        permu(cur, res, visited, n, 0);
        return res;
    }
};