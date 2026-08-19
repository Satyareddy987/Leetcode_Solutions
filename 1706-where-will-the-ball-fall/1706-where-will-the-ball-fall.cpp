class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>res;
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0;i<c;i++){
            int a = 0;
            int c1 = i;
            while(a<r){
                if(grid[a][c1]==1){
                    if(c1<c-1 && grid[a][c1+1]==1){
                        a++;
                        c1++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    if(c1>0 && grid[a][c1-1]==-1){
                        a++;
                        c1--;
                    }
                    else{
                        break;
                    }
                }
            }
            if(a==r){
                res.push_back(c1);
            }
            else{
                res.push_back(-1);
            }
        }
        return res;
    }
};