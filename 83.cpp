class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode* curr = head;

    while (curr != nullptr) {
      while (curr->next && curr->val == curr->next->val)
        curr->next = curr->next->next;
      curr = curr->next;
    }

    return head;
  }
};

Input
head =
[1,1,2]

Output
[1,2]
