class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1) return s;
        map<char,int>m;
        for(auto i : s){
            m[i]++;
        }
        string res;
        char mid = '\0';
        for(auto i : m){
            int c = i.second;
            char ch = i.first;
            for(int j=0;j<c/2;j++){
                res.push_back(ch);
            }
            if(c % 2 == 1 && mid == '\0'){
                mid = ch;
            }
        }
        string rev = res;
        reverse(rev.begin(),rev.end());
        if(mid!='\0'){
            return res+mid+rev;
        }
        return res+rev;
    }
};