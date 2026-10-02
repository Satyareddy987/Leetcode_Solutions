class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        for(int i=0;i<ransomNote.size();i++){
            a[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            b[magazine[i]]++;
        }
        for(auto i : a){
            char ch = i.first;
            int cnt = i.second;
            if(b[ch]<cnt){
                return false;
            }
        }
        return true;
    }
};