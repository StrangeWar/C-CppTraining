

//              5
//             / \
//             1  5
//            / \  \
//            5  5  5


// Given the root of a binary tree, return the number of uni-vatue subtrees.
// A uni—value Subtree means nodes Of the Subtree have the Sane value.

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int countUnivalueSubtrees(TreeNode* root) {
        int count = 0;
        isUnivalueSubtree(root, count);
        return count;
    }

private:
    // Helper function to check if the subtree rooted at 'node' is a univalue subtree
    bool isUnivalueSubtree(TreeNode* node, int& count) {
        // Base case: if node is null, it's a univalue subtree by definition
        if (!node) return true;

        // Recursively check the left and right subtrees
        bool leftIsUnivalue = isUnivalueSubtree(node->left, count);
        bool rightIsUnivalue = isUnivalueSubtree(node->right, count);

        // If either left or right subtree is not univalue, return false
        if (!leftIsUnivalue || !rightIsUnivalue) return false;

        // Check if current node's value matches its children (if they exist)
        if ((node->left && node->left->val != node->val) || 
            (node->right && node->right->val != node->val)) {
            return false;
        }

        // If we reach here, it's a univalue subtree, so increment the count
        count++;
        return true;
    }
};

int main() {
   
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(5);

    Solution solution;
    cout << "Number of Univalue Subtrees: " << solution.countUnivalueSubtrees(root) << endl;

    return 0;
}
