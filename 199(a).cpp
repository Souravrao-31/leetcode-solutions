class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        int level=1;
        int max_level=0;
        vector<int>A;
        rightview(root,level,max_level,A);
        return A;   
    }
    vector<int>rightview(TreeNode * root,int level,int &max_level,vector<int>&A){
        if(root==NULL){
            return A;
        }
        if(max_level<level){
            A.push_back(root->val);
            max_level=level;
        }
        rightview(root->right,level+1,max_level,A);
        rightview(root->left,level+1,max_level,A);
        return A;
    }
};