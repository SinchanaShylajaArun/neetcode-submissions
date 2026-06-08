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
    bool isPalindrome(ListNode* head) {
    ListNode* temp = head;
    ListNode* copyHead = NULL;
    ListNode* tail = NULL;

    while(temp != NULL){
        if(copyHead == NULL){
            copyHead = new ListNode(temp->val);
            tail = copyHead;
        } else {
            tail->next = new ListNode(temp->val);
            tail = tail->next;
        }
        temp = temp->next;
    }
  
    ListNode* curr = copyHead;
    ListNode* reversed = NULL;

while(curr!=NULL){
   ListNode* next1=curr->next;
    curr->next=reversed;
    reversed=curr;
    curr=next1;
}
    ListNode* old = head;
while(old!=NULL && reversed!=NULL){
    if(old->val!=reversed->val){
       return false;
    }
    old=old->next;
    reversed=reversed->next;
}
return true;

    }
};