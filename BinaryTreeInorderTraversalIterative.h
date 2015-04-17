//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_BINARYTREEINORDERTRAVERSALITERATIVE_H
#define LEETCODE150_CPP_R1_BINARYTREEINORDERTRAVERSALITERATIVE_H

#include <vector>
using std::vector;

#include "utils/TreeNode.h"

#include <list>
using std::list;

class BinaryTreeInorderTraversalIterative {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        list<TreeNode *> stack;
        vector<int> result;
        goToLeftMostLeaf(root, stack);
        while (stack.size() > 0) {
            TreeNode *node = stack.back();
            stack.pop_back();
            result.push_back(node->val);
            goToLeftMostLeaf(node->right, stack);
        }
        return result;
    }

private:
    void goToLeftMostLeaf(TreeNode *node, list<TreeNode *> &stack) {
        while (node != 0) {
            stack.push_back(node);
            node = node->left;
        }
    }
};


#endif //LEETCODE150_CPP_R1_BINARYTREEINORDERTRAVERSALITERATIVE_H
