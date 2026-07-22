class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>ls(nums.size());
        vector<int>rs(nums.size());
        ls[0] = nums[0];
        rs[nums.size()-1] = nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            ls[i] = ls[i-1]+nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            rs[i] = rs[i+1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(ls[i]==rs[i]){
                return i;
            }
        }
        return -1;
    }
};