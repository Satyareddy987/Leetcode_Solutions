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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>res;
        ListNode* curr = head;
        ListNode* h = NULL;
        ListNode* t = NULL;
        int sum = 0;
        while(curr!=NULL){
            if(curr->val==0){
                if(sum>0){
                    ListNode *nd = new ListNode(sum);
                    if(h==NULL){
                        h = nd;
                        t = nd;
                    }
                    else{
                        t->next = nd;
                        t = nd;
                    }
                    sum = 0;
                }
            }
            else{
                sum+=curr->val;
            }
            curr = curr->next;
        }
        return h;
    }
};