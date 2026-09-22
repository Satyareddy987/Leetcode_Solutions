class Solution {
public:
    int rev(int n){
        int sum = 0;
        while(n>0){
            sum = sum*10+n%10;
            n/=10;
        }
        return sum;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int a = rev(nums[i]);
            res.push_back(a);
        }
        nums.insert(nums.end(),res.begin(),res.end());
        unordered_set<int>ans(nums.begin(),nums.end());
        return ans.size();
    }
};