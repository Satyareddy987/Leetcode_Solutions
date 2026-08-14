class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int j = 0,mx = 0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            while(m[s[i]]>2){
                m[s[j]]--;
                j++;
            }
            mx = max(mx,i-j+1);
        }
        return mx;
    }
};