class Solution {
public:
    int totalMoney(int n) {
        if(n<=7) return (n*(n+1))/2;
        int a = n%7;
        int b = n/7;
        int sum = 0;
        for(int i=0;i<b;i++){
            sum += 28+i*7;
        }
        for(int i=1;i<=a;i++){
            sum+=b+i;
        }
        return sum;
    }
};