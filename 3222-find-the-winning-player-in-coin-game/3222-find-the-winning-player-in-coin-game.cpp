class Solution {
public:
    string winningPlayer(int x, int y) {
        int m = min(x,y/4);
        if(m%2==0){
            return "Bob";
        }
        else{
            return "Alice";
        }
    }
};