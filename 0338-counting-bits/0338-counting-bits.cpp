class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int cnt = 0,x = i;
            while(x){
                if(x & 1) cnt++;
                x>>=1;
            }
            res.push_back(cnt);
        }
        return res;
    }
};