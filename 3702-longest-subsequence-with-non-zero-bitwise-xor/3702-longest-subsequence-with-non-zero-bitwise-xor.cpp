class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        long long a = 0,cnt = 0;
        for(int i=0;i<nums.size();i++){
            a^=nums[i];
            if(a!=0) cnt++;
        }
        if(a!=0) return nums.size();
        if(cnt>0) return nums.size()-1;
        return 0;
    }
};