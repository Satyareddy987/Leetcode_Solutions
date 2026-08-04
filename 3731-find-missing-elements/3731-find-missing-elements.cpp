class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());
        vector<int>res;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=a;i<=b;i++){
            if(s.find(i)==s.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};