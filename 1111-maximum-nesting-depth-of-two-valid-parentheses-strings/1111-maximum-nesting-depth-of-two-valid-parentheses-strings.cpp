class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>res;
        int cnt = 0;
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
                cnt++;
                if(cnt%2==0){
                    res.push_back(1);
                }
                else{
                    res.push_back(0);
                }
            }
            else{
                if(cnt%2==0){
                    res.push_back(1);
                }
                else{
                    res.push_back(0);
                }
                cnt--;
            }
        }
        return res;
    }
};