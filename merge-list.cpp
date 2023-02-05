class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy;
        ListNode* tail = &dummy;

        while(true){

            if(list1 == NULL){
                tail->next = list2;
                break;
            }
            else if(list2==NULL){
                tail->next = list1;
                break;
            }

            if(list1->val>=list2->val){
                tail->next = list2;
                list2 = list2->next;
                tail = tail->next;
            }
            else{
                tail->next = list1;
                list1=list1->next;
                tail = tail->next;
            }

        }
        return dummy.next;
    }
};
