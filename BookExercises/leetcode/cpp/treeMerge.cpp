class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        int output;
        if(t1 == NULL && t2 == NULL){
            cout << null << endl;
            return NULL;
        }
        else{
            TreeNode *newnode = new TreeNode(NULL);
            if (t1 == NULL){
                output = t2->val;
                std::cout << output << endl;
                newnode->val = output;
                //TreeNode* newnode = new TreeNode(output);
                return newnode;
                mergeTrees(t1, t2->left);
                mergeTrees(t1, t2->right);
            } else if (t2 == NULL){
                output = t1->val;
                std::cout << output << endl;
                newnode->val = output;
                return newnode;
                //TreeNode* newnode = new TreeNode(output);
                mergeTrees(t1->left, t2);
                mergeTrees(t1->right, t2);
            } else {
                //print root node
                output = t1->val + t2->val;
                std::cout << output << endl;
                newnode->val = output;
                //TreeNode *newnode = new TreeNode(output);
                mergeTrees(t1->left, t2->left);
                mergeTrees(t1->right, t2->right);
            }
            return newnode;
            
        }
    }
};
