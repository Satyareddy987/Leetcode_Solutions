class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                unordered_set<int>a(nums.begin()+i,nums.begin()+j+1);
                sum+=a.size()*a.size();
            }
        }
        return sum;
    }
};