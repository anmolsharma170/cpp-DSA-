// // INPUT  1->2->3->4->5->6
// // OUTPUT 1->6->2->5->3->4

// ListNode* reverselinkedlist(ListNode* head){
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newhead=reverselinkedlist(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newhead;
//     }
//     void reorderList(ListNode* head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         ListNode* b=reverselinkedlist(slow->next);
//         ListNode* a=head;
//         slow->next=NULL;
//         ListNode* c=new ListNode(-1);
//         ListNode* tempc=c;
//         ListNode* tempa=a;
//         ListNode* tempb=b;
//         while(tempa && tempb){
//             tempc->next=tempa;
//             tempa=tempa->next;
//             tempc=tempc->next;

//             tempc->next=tempb;
//             tempb=tempb->next;
//             tempc=tempc->next;
//         }
//         tempc->next=tempa;
//         head=c->next;
//     }