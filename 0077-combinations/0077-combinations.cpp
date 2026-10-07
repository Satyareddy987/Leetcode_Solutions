class Solution {
public:
    void backtrack(int st,int n,int k,vector<int>&res,vector<vector<int>>&ans){
        if(res.size()==k){
            ans.push_back(res);
            return;
        }
        for(int i=st;i<=n;i++){
            res.push_back(i);
            backtrack(i+1,n,k,res,ans);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>res;
        vector<vector<int>>ans;
        backtrack(1,n,k,res,ans);
        return ans;
    }
};