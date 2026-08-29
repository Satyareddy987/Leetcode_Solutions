class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int low = 1,high = x/2;
        long long res = 0;
        while(low<=high){
            long long mid = low+(high-low)/2;
            long long sq = mid*mid;
            if(sq==x) return (int)mid;
            else if(sq<x){
                low = mid+1;
            }
            else high = mid-1;
        }
        return (int)high;
    }
};