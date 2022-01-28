//Question Link --> https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode Dummy;
        ListNode *l3=&Dummy;
        int s1,s2,s3,c=0;
        
        while(l1 or l2){
            if(l1){
                s1=l1->val;
                l1=l1->next;}
            else
                s1=0;
            
            if(l2){
                s2=l2->val;
                l2=l2->next;}
            else
                s2=0;
            
            s3=(s1+s2+c)%10;
            c=(s1+s2+c)/10;
            
            ListNode* temp=new ListNode(s3);
            temp->next=NULL;
            
            l3->next=temp;
            l3=temp;  
            
            
        }
        
        if(c==1){
            ListNode* temp=new ListNode(c);
            temp->next=NULL;    
            l3->next=temp;
        
        }
    
        return Dummy.next;
        
        
    }
};
