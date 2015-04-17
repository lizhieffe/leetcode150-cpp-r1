//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_BINARYTREEINORDERTRAVERSAL_H
#define LEETCODE150_CPP_R1_BINARYTREEINORDERTRAVERSAL_H

#include "utils/TreeNode.h"

#include <vector>
using std::vector;

class BinaryTreeInorderTraversal {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        inorderTraversal(root, result);
        return result;
    }

private:
    void inorderTraversal(TreeNode *root, vector<int> &result) {
        if (root == 0)
            return;
        inorderTraversal(root->left, result);
        result.push_back(root->val);
        inorderTraversal(root->right, result);
    }
};


#endif //LEETCODE150_CPP_R1_BINARYTREEINORDERTRAVERSAL_H
