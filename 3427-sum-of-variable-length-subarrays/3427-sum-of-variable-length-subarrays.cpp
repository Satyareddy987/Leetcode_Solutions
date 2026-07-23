class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int>p(nums.size());
        p[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            p[i] = p[i-1]+nums[i];
        }
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int st = max(0,i-nums[i]);
            if(st==0){
                sum+=p[i];
            }
            else sum+=p[i]-p[st-1];
        }
        return sum;
    }
};