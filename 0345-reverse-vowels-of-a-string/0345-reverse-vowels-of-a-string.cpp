class Solution {
public:
    bool isvowel(char s){
        s = tolower(s);
        return (s=='a' || s=='e' || s=='i' || s=='o' || s=='u');
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isvowel(s[i]) && !isvowel(s[j])){
                j--;
            }
            else i++;
        }
        return s;
    }
};