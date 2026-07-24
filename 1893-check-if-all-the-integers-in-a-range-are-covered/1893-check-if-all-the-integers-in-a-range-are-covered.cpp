class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i=left;i<=right;i++){
            bool covered = false;
            for(auto j : ranges){
                if(i>=j[0] && i<=j[1]){
                    covered = true;
                }
            }
            if(!covered) return false;
        }
        return true;
    }
};