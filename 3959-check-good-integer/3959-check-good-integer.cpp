class Solution {
public:
    bool istrue(string s){
        int sum = 0,sq = 0;
        for(int i=0;i<s.size();i++){
            int a = s[i]-'0';
            sum += a;
            sq += a*a; 
        }
        return (sq-sum>=50);
    }
    bool checkGoodInteger(int n) {
        string s = to_string(n);
        return istrue(s);
    }
};