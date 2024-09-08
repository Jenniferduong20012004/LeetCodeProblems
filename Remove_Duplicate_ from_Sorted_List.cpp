/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL){
            return head;
        }
        ListNode* start = head;
        while (head-> next != NULL){
            if (head->next->val == head->val){
                head->next = head->next->next;
            }
            else{
                head = head->next;
            }
        }
        return start;
}
int main()
{
    ListNode a;
    a.val = 1;
    ListNode b;
    b.val = 1;
    ListNode c;
    c.val = 2;
    ListNode d;
    d.val = 3;
    ListNode e;
    e.val = 3;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    deleteDuplicates(&a);
    cout << a.val << " ";
    while (a.next != NULL){
        a = *(a.next);
        cout << a.val << " ";
    }
    return 0;
}