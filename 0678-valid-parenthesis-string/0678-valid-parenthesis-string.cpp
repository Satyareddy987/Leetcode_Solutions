class Solution {
public:
    bool checkValidString(string s) {
        int lb = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='*'){
                lb++;
            }
            else lb--;
            if(lb<0) return false;
        }
        int rb = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')' || s[i]=='*'){
                rb++;
            }
            else rb--;
            if(rb<0) return false;
        }
        return true;
    }
};