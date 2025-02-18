class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    if (!head || !head->next)
      return head;

    ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
  }
};


Input
head =
[1,2,3,4,5]
Output
[5,4,3,2,1]
