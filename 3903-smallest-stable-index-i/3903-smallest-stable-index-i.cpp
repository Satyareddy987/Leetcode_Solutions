class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pr(n), su(n);
        pr[0] = nums[0];
        for(int i=1; i<n; i++){
            pr[i] = max(pr[i-1], nums[i]);
        }
        su[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            su[i] = min(su[i+1], nums[i]);
        }
        int res = -1;
        for(int i=0; i<n; i++){
            if(pr[i] - su[i] <= k){
                res = i;
                break; 
            }
        }
        return res;
    }
};
