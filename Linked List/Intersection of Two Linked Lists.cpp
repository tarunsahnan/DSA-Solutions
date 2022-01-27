// Question Link--> https://leetcode.com/problems/intersection-of-two-linked-lists/
/*
Approach which i have used is:
1. Count the number of elemets in each Linked List.
2. Traverse the extra elements of larger linked list so that elements in both the linked lists are equal.
3. Traverse both the linked list till the point to same address.
4. If intersection is found return the node, else return null.
*/

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int A=0,B=0;    // variables for counting length of each linked list.
        
        
        //loop for calculating length of headA linked list.
        ListNode *temp=headA;
        while(temp!=NULL){
            A++;
            temp=temp->next;
        }
        
        //loop for calculating length of headB linked list.
        temp=headB;
        while(temp!=NULL){
            B++;
            temp=temp->next;
        }
        
        
        // this will ensure that my small linked list is always headA.
        if(A>B){
            swap(A,B);
            swap(headA,headB);
        }
        
        
        //move bigger linked list headB ahead (A-B) times to make them of equal length
        while(A-B != 0){
        headB= headB->next;
        B--;
        }
        
        
        //compare each node untill the end of linked list
        while (headA != NULL){
            
            if(headA == headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
            
        }
        
        return NULL;
}
