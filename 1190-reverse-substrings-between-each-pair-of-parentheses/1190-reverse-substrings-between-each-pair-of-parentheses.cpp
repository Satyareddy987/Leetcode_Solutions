class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]!=')'){
                st.push(s[i]);
            }
            else{
                string b;
                while(!st.empty() && st.top()!='('){
                    b+=st.top();
                    st.pop();
                }
                st.pop();
                for(int i=0;i<b.size();i++){
                    st.push(b[i]);
                }
            }
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};