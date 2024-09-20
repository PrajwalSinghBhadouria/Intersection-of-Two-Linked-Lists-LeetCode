/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1= headA;
        ListNode *temp2 = headB;
        map<ListNode*, int> mp;
        while(temp1!=NULL){
            ListNode *temp = new ListNode(temp1->val);
            mp[temp1] = temp->val;
            temp1 = temp1->next;
        }
        map<ListNode*,int> mp2;
        while(temp2!=NULL){
            ListNode *temp = new ListNode(temp2->val);
            if(mp.find(temp2)!=mp.end()){
                return temp2;
            }
            temp2 = temp2->next;   
        }
        return NULL;
    }
};
