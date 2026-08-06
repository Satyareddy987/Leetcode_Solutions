class Solution {
public:
    bool res(int n,int t){
        int prod = 1;
        while(n>0){
            prod *= n%10;
            n/=10; 
        }
        if(prod%t==0){
            return true;
        }
        return false;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(res(n,t)){
                return n;
            }
            n++;
        }
        return 0;
    }
};