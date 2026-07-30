class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int cnt = 1,sum = 0;
        if(word.size()<=8){
            return word.size();
        }
        else{while(n>0){
                if(n>8){
                    sum+=8*cnt;
                    cnt++;
                    n-=8;
                }
                else{
                    sum+=n*cnt;
                    n = 0;
                }
            }
        }
        return sum;
    }
};