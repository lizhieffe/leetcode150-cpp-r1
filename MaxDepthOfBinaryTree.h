//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_MAXDEPTHOFBINARYTREE_H
#define LEETCODE150_CPP_R1_MAXDEPTHOFBINARYTREE_H

#include "utils/TreeNode.h"
#include <algorithm>

class MaxDepthOfBinaryTree {
public:
    int maxDepth(TreeNode *root) {
        if (root == 0)
            return 0;
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};


#endif //LEETCODE150_CPP_R1_MAXDEPTHOFBINARYTREE_H
