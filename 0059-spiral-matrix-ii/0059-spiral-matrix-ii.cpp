class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rows = n;
        int cols = n;
        vector<vector<int>>a(rows,vector<int>(cols));
        int top = 0,bottom = rows-1,left = 0,right = cols-1;
        int sum = 1;
        while(left<=right && top<=bottom){
            for(int j=left;j<=right;j++){
                a[top][j] = sum;
                sum++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                a[i][right] = sum;
                sum++;
            }
            right--;
            if(left<=right){
                for(int j=right;j>=left;j--){
                    a[bottom][j] = sum;
                    sum++;
                }
            }
            bottom--;
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    a[i][left] = sum;
                    sum++;
                }
            }
            left++;
        }
        return a;
    }
};