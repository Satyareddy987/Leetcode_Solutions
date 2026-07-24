class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int sum1 = 0,sum2 = 0;
        sum1 = start[0]+start[1];
        sum2 = target[0]+target[1];
        return (sum1%2)==(sum2%2);
    }
};