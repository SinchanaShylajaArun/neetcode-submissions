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
    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter = 0;
        calculateHeight(root, max_diameter);
        return max_diameter;
    }
    
    int calculateHeight(TreeNode* node, int& max_diameter) {
        if (node == nullptr) {
            return 0;
        }
        
        int left_height = calculateHeight(node->left, max_diameter);
        int right_height = calculateHeight(node->right, max_diameter);
        
        // Calculate the diameter passing through the current node
        int current_diameter = left_height + right_height;
        
        // Update max_diameter if the current diameter is larger
        if (current_diameter > max_diameter) {
            max_diameter = current_diameter;
        }
        
        // Return the height of the current subtree
        return 1 + max(left_height, right_height);
    }
};
