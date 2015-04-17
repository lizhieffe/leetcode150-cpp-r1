//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_SAMETREE_H
#define LEETCODE150_CPP_R1_SAMETREE_H

#include "utils/TreeNode.h"

class SameTree {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == 0 && q == 0)
            return true;
        if (p == 0 || q == 0)
            return false;
        if (p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        else
            return false;
    }
};


#endif //LEETCODE150_CPP_R1_SAMETREE_H
