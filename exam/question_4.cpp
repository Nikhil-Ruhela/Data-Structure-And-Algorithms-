#include <iostream>
#include <queue>
#include <map>

using namespace std;

// Binary Tree Node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Tree class
class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() : root(nullptr) {}

    // Function to print the right view of the binary tree
    void printRightView() {
        if (root == nullptr) {
            return;
        }

        map<int, int> rightmostValues;  // To store the rightmost values at each level
        queue<pair<TreeNode*, int>> q;  // Queue for level order traversal

        q.push({root, 0});  // Root is at level 0

        while (!q.empty()) {
            TreeNode* current = q.front().first;
            int level = q.front().second;
            q.pop();

            // Insert the current node's value for the current level if not already present
            if (rightmostValues.find(level) == rightmostValues.end()) {
                rightmostValues[level] = current->data;
            }

            // Enqueue the right and left child of the current node if they exist
            if (current->right) {
                q.push({current->right, level + 1});
            }
            if (current->left) {
                q.push({current->left, level + 1});
            }
        }

        // Print the rightmost values at each level
        cout << "Right View of the Binary Tree:" <<endl;
        for (const auto& entry : rightmostValues) {
            cout << entry.second << " ";
        }
        cout << std::endl;
    }
};

int main() {
    // Example Usage:
    BinaryTree tree;

    // Constructing a sample binary tree
    tree.root = new TreeNode(1);
    tree.root->left = new TreeNode(2);
    tree.root->right = new TreeNode(3);
    tree.root->left->right = new TreeNode(4);
    tree.root->right->left = new TreeNode(5);
    tree.root->right->right = new TreeNode(6);

    // Print the right view of the binary tree
    tree.printRightView();

    return 0;
}