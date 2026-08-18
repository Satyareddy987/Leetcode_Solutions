class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        unordered_map<int,int>n;
        for(int i=0;i<k;i++){
            n[nums[i]]++;
        }
        for(auto i : n){
            m[i.first]++;
        }
        for(int i=k;i<nums.size();i++){
            n[nums[i-k]]--;
            if(n[nums[i-k]]==0) n.erase(nums[i-k]);
            n[nums[i]]++;
            for(auto j : n){
                m[j.first]++;
            }
        }
        int ans = -1;
        for(auto i : m){
            if(i.second==1){
                ans = max(ans,i.first);
            }
        }
        return ans;
    }
};