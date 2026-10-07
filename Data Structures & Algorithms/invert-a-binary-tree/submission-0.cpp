/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root==NULL){
            return NULL;
        }

        // when there is an empty tree, return empty and not 0,hence NULL
       TreeNode* temp=root->left;
       root->left=root->right;
       root->right=temp;
// we want to swap the positions
       invertTree(root->left);
    //    do this to the left tree
       invertTree(root->right);
        
    // do this to the right tree

    // start from the leaf node and move upwards. In Ex1: 4,5->swap; 6,7 we swap. Then move up 2,3->swap adn make it 3,2
    
    return root;
    }
};
