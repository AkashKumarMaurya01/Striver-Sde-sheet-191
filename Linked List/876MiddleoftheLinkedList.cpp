#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
   
    ListNode* middleNode(ListNode* head) {
    if(head->next==NULL) return head;
    ListNode*slow = head;
    ListNode*fast = head;

    while(fast!=NULL)
    {
         fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
      

    }
    return slow; 
    }
};


// fast 2x se slow x speed se chalega jaha par fast ruk jayega uss time slow jaha pointer jaha point kar rha wahi mid hoga























// class Solution {
// public:
//     int getlen(ListNode*&head)
//     {
//         int len =0;
//         ListNode*temp=head;
//         while(temp!=NULL)
//         {
//             len++;
//             temp= temp->next;
//         }
//         return len;
//     }
//     ListNode* middleNode(ListNode* head) {

//         int len = getlen(head)/2 + 1;
         
//             int i=1;
//             while(i<len)
//             {
//               head = head->next; 
//               i++; 
//             }
//         return head;
        
//     }
// };