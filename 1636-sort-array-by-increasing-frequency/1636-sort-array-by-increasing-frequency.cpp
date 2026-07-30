class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i : nums){
            m[i]++;
        }
        vector<pair<int,int>>p;
        for(auto i : m){
            p.push_back({i.first,i.second});
        }
        sort(p.begin(), p.end(), [](auto &a, auto &b){
            if(a.second == b.second) 
                return a.first > b.first; 
            return a.second < b.second;   
        });
        vector<int>res;
        for(auto i : p){
            int n = i.second;
            for(int j=0;j<n;j++){
                res.push_back(i.first);
            }
        }
        return res;
    }
};