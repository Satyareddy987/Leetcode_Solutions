class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<A.size();i++){
            int cnt = 0;
            m[A[i]]++;
            m[B[i]]++;
            for(auto i : m){
                if(i.second == 2){
                    cnt++;
                }
            }
            res.push_back(cnt);
        }
        return res;
    }
};