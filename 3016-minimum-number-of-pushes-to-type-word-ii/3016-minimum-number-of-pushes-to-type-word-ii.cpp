class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>m;
        for(auto i : word){
            m[i]++;
        }
        vector<pair<char,int>>p;
        for(auto i : m){
            p.push_back({i.first,i.second});
        }
    sort(p.begin(), p.end(), [](auto &a, auto &b){
            if(a.second == b.second) 
                return a.first < b.first; 
            return a.second > b.second;   
        });
        int sum = 0;
        for(int i=0;i<p.size();i++){
            int w = (i/8)+1;
            sum+=p[i].second*w;
        }
        return sum;
    }
};