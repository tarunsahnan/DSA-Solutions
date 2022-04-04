//OJ --> https://leetcode.com/problems/sort-list/

class Solution {
public:
    
    ListNode* sortList(ListNode* head) {
        
        vector<int> val;
        
        ListNode* temp=head;
        
        while(temp){
            val.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(val.begin(),val.end());
        
        temp=head;
        for(auto i: val){
            temp->val=i;
            temp=temp->next;
        }
        return head;
        
    }
};