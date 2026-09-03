class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        if (n == 1) return true;
        int minOdd = INT_MAX, minEven = INT_MAX;
        for (int x : nums1) {
            if (x % 2 == 0) minEven = min(minEven, x);
            else minOdd = min(minOdd, x);
        }
        bool allOdd = true;
        for (int x : nums1) {
            if (x % 2 == 1) continue; 
            if (minOdd < x && (x - minOdd) % 2 == 1) continue;
            allOdd = false;
            break;
        }
        bool allEven = true;
        for (int x : nums1) {
            if (x % 2 == 0) continue; 
            if (minOdd < x && (x - minOdd) % 2 == 0) continue;
            allEven = false;
            break;
        }
        return allOdd || allEven;
    }
};
