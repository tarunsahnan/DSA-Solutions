//Question Link --> https://leetcode.com/problems/serialize-and-deserialize-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
 
    void preorder(TreeNode* root, string& s){
        
        if(root == NULL) {
            s.push_back('N');
            s.push_back(' ');
            return;
        }
        
        s+= to_string(root->val) + ' ';
        preorder(root->left,s);
        preorder(root->right,s);
        
    }
    
    
    string serialize(TreeNode* root) {
        
        string s="";
        preorder(root,s);
        return s;
        
    }
    
    TreeNode* calc(queue<string>& pre){
        
        string s=pre.front();
        pre.pop();
        
        if(s == "N"){
            return NULL;
        }
        cout<<s<<" ";
        TreeNode* newNode = new TreeNode (stoi(s));
        
        
        newNode->left = calc(pre);
        newNode->right = calc(pre);
        
        return newNode;
        
    }
    
    TreeNode* deserialize(string s) {
    
     string s1 ="";
        queue <string> q;
        for(char c: s) {
            if(c ==' ') {
                q.push(s1);
                s1="";
                continue;
            }
            s1+=c;
        }
        queue<string> temp=q;
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        
        return calc(temp);
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
