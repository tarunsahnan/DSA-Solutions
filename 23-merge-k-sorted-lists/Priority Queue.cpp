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
    
    class comp{
        public:
        
        bool operator()(ListNode *l1, ListNode *l2){
            return l1->val > l2->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        if(lists.size() == 1) return lists[0];
        
        priority_queue<ListNode*,vector<ListNode*>,comp> pq;
        
        for(auto it: lists)
            if(it)
                pq.push(it);
        ListNode * dummy =new ListNode(-1);
        ListNode * itr=dummy;
        
        while(!pq.empty()){
            auto curr=pq.top(); //min heap
            pq.pop();
            itr->next=curr;
            
            if(curr->next)
                pq.push(curr->next);
            itr=itr->next;   
        }
        
        itr->next=NULL;
        
        return dummy->next;
        
    }
};
