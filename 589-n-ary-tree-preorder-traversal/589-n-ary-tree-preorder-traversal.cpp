/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void pre(Node* root, vector<int>& res){
        if(root==NULL) return;
        
        res.push_back(root->val);
        
        auto childs = root->children;
        for(int i=0;i<childs.size();i++){
            pre(childs[i],res);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> res;
        pre(root,res);
        return res;
    }
};