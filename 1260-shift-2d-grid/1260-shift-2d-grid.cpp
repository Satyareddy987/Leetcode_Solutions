class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>res;
        int r = grid.size(),c = grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res.push_back(grid[i][j]);
            }
        }
        k = k%(r*c);
        reverse(res.begin(),res.end());
        reverse(res.begin(),res.begin()+k);
        reverse(res.begin()+k,res.end());
        vector<vector<int>>ans(r,vector<int>(c));
        int x = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j] = res[x++];
            }
        }
        return ans;
    }
};