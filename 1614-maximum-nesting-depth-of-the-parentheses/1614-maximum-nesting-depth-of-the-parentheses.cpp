class Solution {
public:
    int maxDepth(string s) {
        int ans = 0,mans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans++;
                mans = max(mans,ans);
            }
            else if(s[i]==')'){
                ans--;
            }
        }
        return mans;
    }
};