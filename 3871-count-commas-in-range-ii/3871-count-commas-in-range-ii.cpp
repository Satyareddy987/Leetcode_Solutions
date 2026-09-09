class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;
        if (n < 1000) return 0;
        if (n >= 1000) cnt += (min(n, 999999LL) - 999) * 1;
        if (n >= 1000000) cnt += (min(n, 999999999LL) - 999999) * 2;
        if (n >= 1000000000) cnt += (min(n, 999999999999LL) - 999999999) * 3;
        if (n >= 1000000000000) cnt += (min(n, 999999999999999LL) - 999999999999LL) * 4;
        if (n >= 1000000000000000) cnt += (min(n, 999999999999999999LL) - 999999999999999LL) * 5;
        return cnt;
    }
};
