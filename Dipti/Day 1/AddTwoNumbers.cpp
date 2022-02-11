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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int sum,carry=0;
        ListNode *temp1,*temp2,*sumList=NULL,*head=0;
        temp1 = l1;
        temp2 = l2;
        while(temp1 != 0 && temp2 != 0)
        {
            sum = temp1->val + temp2->val + carry;
            if(sum > 9)
            {    
                carry = sum/10;
                sum = sum % 10;
            }
            else
                carry = 0;
            if(sumList == 0)
            {
                sumList = new ListNode(sum,NULL);
                head = sumList;
            }
            else
            {
                ListNode *x = new ListNode(sum,NULL);
                sumList->next = x;
                sumList = x;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1 != 0)
        {
            sum = temp1->val + carry;
            if(sum > 9)
            {    
                carry = sum/10;
                sum = sum % 10;
            }
            else
                carry = 0;
            ListNode *x = new ListNode(sum,NULL);
            sumList->next = x;
            sumList = x;
            temp1 = temp1->next;
        }
        while(temp2 != 0)
        {
            sum = temp2->val + carry;
            if(sum > 9)
            {    
                carry = sum/10;
                sum = sum % 10;
            }
            else
                carry = 0;
            ListNode *x = new ListNode(sum,NULL);
            sumList->next = x;
            sumList = x;
            temp2 = temp2->next;
        }
        if(carry != 0)
        {
            ListNode *x = new ListNode(carry,NULL);
            sumList->next = x;
            sumList = x;
        }
        return head;
    }
};
