
class Solution {
public:
    bool sametree(TreeNode* root, TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr){
            return true;
        }
        else if(root==nullptr || subRoot==nullptr){
            return false;
        }
        if(root->val!=subRoot->val){
            return false;
        }
        if(sametree(root->left,subRoot->left)==false){
            return false;
        }
        if(sametree(root->right,subRoot->right)==false){
            return false;
        }
    return true;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr){
            return true;
        }
        if(root==nullptr){
            return false;
        }
        if(sametree(root,subRoot)==true){
            return true;
        }
        if(isSubtree(root->left,subRoot)){
            return true;
        }
        if(isSubtree(root->right,subRoot)){
            return true;
        }
        return false;      
    }
};
