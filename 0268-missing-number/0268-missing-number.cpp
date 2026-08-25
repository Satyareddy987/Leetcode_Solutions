class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<INT_MAX;i++){
            int x = i;
            auto it = find(nums.begin(),nums.end(),x);
            if(it==nums.end()){
                return x;
                break;
            }
        }
        return 0;
    }
};