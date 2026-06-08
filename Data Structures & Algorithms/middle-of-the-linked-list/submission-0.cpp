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
    ListNode* middleNode(ListNode* head) {
        ListNode*A=head;
        ListNode*B=head;
        int count=0;
        int middle;
        while(A->next!=NULL){
            A=A->next;
            count++;
        }
        if(count%2!=0){
            count+=1;
            middle=count/2;
            for(int i=1;i<=middle;i++){
                B=B->next;
            }
            return B;
        }else{
            middle=count/2;
            for(int i=1;i<=middle;i++){
                B=B->next;
            }
            return B;
        }
        
    }
};