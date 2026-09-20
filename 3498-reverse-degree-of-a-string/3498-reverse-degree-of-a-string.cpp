class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0,a;
        for(int i=0;i<s.size();i++){
            a = 0;
            a = 26-(s[i]-'a');
            sum+=a*(i+1);
        }
        return sum;
    }
};