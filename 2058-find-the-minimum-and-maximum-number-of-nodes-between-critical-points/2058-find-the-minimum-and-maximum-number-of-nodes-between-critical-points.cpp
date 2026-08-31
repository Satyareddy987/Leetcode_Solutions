/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        vector<int>ans;
        vector<int>res;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        if(ans.size()<2) return {-1,-1};
        for(int i=1;i<ans.size()-1;i++){
            if((ans[i]<ans[i-1] && ans[i]<ans[i+1]) || (ans[i]>ans[i-1] && ans[i]>ans[i+1])){
                res.push_back(i+1);
            }
        }
        if(res.size()<2) return {-1,-1};
        int mindist = INT_MAX;
        for(int i=1;i<res.size();i++){
            mindist = min(mindist,res[i]-res[i-1]);
        }
        int maxdist = res.back()-res.front();
        return {mindist,maxdist};
    }
};