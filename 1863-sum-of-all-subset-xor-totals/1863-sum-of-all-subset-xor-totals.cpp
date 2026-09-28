class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int tor = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            tor|=nums[i];
        }
        int res = tor*pow(2,n-1);
        return res;
    }
};