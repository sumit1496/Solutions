// https://www.interviewbit.com/problems/root-to-leaf-paths-with-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void utility(TreeNode* root, vector<vector<int> >& sol, int sum, vector<int>& v){
    if(sum == 0 && root->left == NULL && root->right == NULL){
        sol.push_back(v);
    }
    if(root->left != NULL){
        v.push_back((root->left)->val);
        utility(root->left, sol, sum - (root->left)->val, v);
        v.pop_back();
    }
    if(root->right != NULL){
        v.push_back((root->right)->val);
        utility(root->right, sol, sum - (root->right)->val, v);
        v.pop_back();
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > soln;
    vector<int> v;
    if(A==NULL){
        return soln;
    }
    v.push_back(A->val);
    utility(A,soln,B-(A->val),v);
    return soln;
    
}

