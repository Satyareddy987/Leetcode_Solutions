class Solution {
public:
    string build(string str){
        stack<int>st;
        for(auto i : str){
            if(i=='#'){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(i);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};