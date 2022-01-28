//Question Link--> https://leetcode.com/problems/merge-k-sorted-lists/


 //function to merge two sorted lists in sorted manner
    ListNode* merge2list(ListNode* l1, ListNode* l2){
        
        ListNode Dummy;
        ListNode *output=&Dummy;
        
        while(l1 and l2){
            
            if(l1->val < l2->val){
                output->next=l1;
                l1=l1->next;
            }
            
            else{
                output->next=l2;
                l2=l2->next;
            }
            output=output->next;
        }
        
        if(l1)
            output->next=l1;
        
        if(l2)
            output->next=l2;
        
        return Dummy.next;
    }
     
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    
        
        if(lists.size()==0) //if list(vector) is empty return null
            return 0;
        
        int n=lists.size()-1;   // n will hold the length of list(vector)
        
        n/=2;                   //we are dividng the list into half
        
        while(2*n > 1){
        for(int i=0;i<=n;i++)
            if(i != n-i)
                lists[i]=merge2list(lists[i],lists[n-i]); //merge i and n-ith linked list;
            n/=2;
        }
        
        return lists[0];  //return first linked list because we have merge all linked lists in that only
    }
