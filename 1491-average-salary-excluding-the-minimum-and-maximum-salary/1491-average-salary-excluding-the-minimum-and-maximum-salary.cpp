class Solution {
public:
    double average(vector<int>& salary) {
        int a = *min_element(salary.begin(),salary.end());
        int b = *max_element(salary.begin(),salary.end());
        int sum = 0;
        for(auto i : salary){
            sum+=i;
        }
        return (double)(sum-(a+b))/(salary.size()-2);
    }
};