class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int a = floor((purchaseAmount+5)/10)*10;
        return 100-a;
    }
};