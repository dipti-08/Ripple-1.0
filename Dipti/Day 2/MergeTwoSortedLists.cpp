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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *head=0;
        if(list1 == 0 && list2 == 0)
        {
            return head;
        }
        ListNode *m=0,*t1=list1,*t2=list2;
        while(t1 != 0 && t2 != 0)
        {
            if(t1->val > t2->val)
            {
                if(m == 0)
                {
                    m = new ListNode(t2->val,0);
                    head = m;
                }
                else
                {
                    ListNode *temp = new ListNode(t2->val,0);
                    m->next = temp;
                    m = temp;
                }
                t2 = t2->next;
            }
            else
            {
                if(m == 0)
                {
                    m = new ListNode(t1->val,0);
                    head = m;
                }
                else
                {
                    ListNode *temp = new ListNode(t1->val,0);
                    m->next = temp;
                    m = temp;
                }
                t1 = t1->next;
            }
        }
        while(t1 != 0)
        {
            if(m == 0)
            {
                m = new ListNode(t1->val,0);
                head = m;
            }
            else
            {
                ListNode *temp = new ListNode(t1->val,0);
                m->next = temp;
                m = temp;
            }
            t1 = t1->next;
        }
        while(t2 != 0)
        {
            if(m == 0)
            {
                m = new ListNode(t2->val,0);
                head = m;
            }
            else
            {
                ListNode *temp = new ListNode(t2->val,0);
                m->next = temp;
                m = temp;
            }
            t2 = t2->next;
        }
        return head;
    }
};
