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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL){
            return list2;
        }else if(list2 == NULL) {
            return list1;
        }

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        ListNode* ans = new ListNode(0);
        ListNode* dummy = ans;

        while (temp1 != NULL && temp2 != NULL) {

            if (temp1->val < temp2->val) {

                
                dummy->next = temp1;
                temp1 = temp1->next;

            } else {

                dummy->next = temp2;
                temp2 = temp2->next;

            }

            dummy = dummy->next;
        }

        if(temp1 != NULL) {

            dummy->next = temp1;

        }else {

            dummy->next = temp2;
            
        }

        return ans->next;
    }
};