/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* temp = NULL;

    while(head != NULL){
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    
    head = prev;
    temp = NULL;
    free(temp);
    return head;
}