/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSymmetric(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL) return 0;
    
    if(A->left==NULL && A->right==NULL) return 1;
    
    if(A->left==NULL || A->right==NULL) return 0;
    
    TreeNode *temp1=A->left;
    TreeNode *temp2=A->right;
    
    while(temp1->left!=NULL && temp2->right!=NULL)
    {
        temp1=temp1->left;
        temp2=temp2->right;
        
       if( (temp1->val!=temp2->val))
          return 0;
    }
    
    
    while(temp1->right!=NULL && temp2->left!=NULL)
    {
        temp1=temp1->right;
        temp2=temp2->left;
        
       if( (temp1->val!=temp2->val))
          return 0;

    }
    return 1;
    
}
