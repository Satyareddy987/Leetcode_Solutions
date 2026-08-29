class Solution {
public:
    int sumSquare(int n) {
        int sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r * r;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = sumSquare(n);
        while (fast != 1 && slow != fast) {
            slow = sumSquare(slow);
            fast = sumSquare(sumSquare(fast));
        }
        return fast == 1;
    }
};