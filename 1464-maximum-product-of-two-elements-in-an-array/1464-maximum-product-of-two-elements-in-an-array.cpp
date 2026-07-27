class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        res=((nums[n-1]-1)*(nums[n-2]-1));
        return res;
    }
};