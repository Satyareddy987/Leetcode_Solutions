class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int x = 0;
        for(auto i : nums){
            m[i]++;
        }
        int p = 0;
        for(auto i : m){
            p+=i.second/2;
            if(i.second%2!=0){
                x++;
            }
        }
        return {p,x};
    }
};