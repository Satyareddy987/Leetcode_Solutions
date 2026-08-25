class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x = k,ans = 0;
        for(int i=1;i<INT_MAX;i++){
            x = k*i;
            auto it = find(nums.begin(),nums.end(),x);
            if(it==nums.end()){
                ans = x;
                break;
            }
        }
        return ans;
    }
};