//Question Link --> https://leetcode.com/problems/merge-two-sorted-lists/


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode Dummy(0);          //dummy node is the head of our output linked list
        ListNode* output=&Dummy;    //pointer to dummy node
        
        
        //loop for making the minimum value from List1 or List2 as the next element of our output linked list
        while(list1 and list2){
            
            //if(value in list1 is small)
            if(list1->val < list2->val ){ 
                output->next=list1;
                list1=list1->next;
            }
            
            //if(value in list2 is small)
            else {
                output->next=list2;  
                list2=list2->next;
            }
            
            output = output->next;
        }
        
        //if there are remaining elements in list1
        if(list1 !=NULL)
             output->next=list1;
        
        //if there are remaining elements in list2
        if(list2 !=NULL)
            output->next=list2;
        
        return Dummy.next;
    }
