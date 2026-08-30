class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX,maxi = INT_MIN,a,b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini = nums[i];
                a = i;
            }
            if(nums[i]>maxi){
                maxi = nums[i];
                b = i;
            }
        }
        int left = min(a,b);
        int right = max(a,b);
        int f = right+1;
        int l = nums.size()-left;
        int m = (left+1)+(nums.size()-right);
        return min({f,l,m});
    }
};