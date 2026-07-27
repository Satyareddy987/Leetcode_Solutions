class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                st.push(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9'){
                if(!st.empty()) st.pop();
            }
        } 
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};