/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int b=0;
    while(head)
    {
      b = b*2 + head->val;
      head=head->next;
    }
    return b;
}
    
