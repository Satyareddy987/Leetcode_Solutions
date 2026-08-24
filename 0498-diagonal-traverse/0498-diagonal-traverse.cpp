class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>res;
        vector<vector<int>>ans((mat.size()+mat[0].size())-1);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans[i+j].push_back(mat[i][j]);
            }
        }
        for(int i=0;i<ans.size();i++){
            if(i%2==0){
                for(int j=ans[i].size()-1;j>=0;j--){
                    res.push_back(ans[i][j]);
                }
            }
            else{
                for(int j=0;j<ans[i].size();j++){
                    res.push_back(ans[i][j]);
                }
            }
        }
        return res;
    }
};