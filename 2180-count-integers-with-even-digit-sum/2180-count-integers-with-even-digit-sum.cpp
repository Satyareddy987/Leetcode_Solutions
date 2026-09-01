class Solution {
public:
    bool digit_count(int n){
        int sum = 0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(sum%2==0) return true;
        return false;
    }
    int countEven(int num) {
        int cnt = 0;
        for(int i=1;i<=num;i++){
            if(digit_count(i)){
                cnt++;
            }
        }
        return cnt;
    }
};