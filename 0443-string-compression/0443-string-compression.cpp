class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1) return 1;
        vector<char> res;
        int i = 0, j = 0;
        while (j < chars.size()) {
            while (j < chars.size() && chars[i] == chars[j]) {
                j++;
            }
            res.push_back(chars[i]);
            int cnt = j - i;
            if (cnt > 1) {
                string a = to_string(cnt);
                for (auto x : a) {
                    res.push_back(x);
                }
            }
            i = j;
        }
        for (int k = 0; k < res.size(); k++) {
            chars[k] = res[k];
        }
        return res.size();
    }
};
