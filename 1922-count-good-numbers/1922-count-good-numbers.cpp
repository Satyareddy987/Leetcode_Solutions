class Solution {
public:
    long long mod = 1000000007;
    long long power(long long num, long long n) {
        long long ans = 1;
        while (n > 0) {
            if (n % 2 == 1) {
                ans = (ans * num) % mod;
            }
            num = (num * num) % mod;
            n = n / 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {

        long long ans = 0;
        long long a = (n + 1) / 2;
        long long b = n / 2;
        if (n % 2 == 0) {
            ans = power(5, b) * power(4, b) % mod;
        } else {
            ans = power(5, a) * power(4, b) % mod;
        }
        return ans % mod;
    }
};