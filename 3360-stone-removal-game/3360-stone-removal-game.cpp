class Solution {
public:
    bool canAliceWin(int n) {
        int cnt = 0;
        int k = 10;
        while(n>=k){
            n-=k;
            k--;
            cnt++;
        }
        if(cnt%2==0) return false;
        return true;
    }
};