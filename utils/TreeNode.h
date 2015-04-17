//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_TREENODE_H
#define LEETCODE150_CPP_R1_TREENODE_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(0), right(0) {}
};


#endif //LEETCODE150_CPP_R1_TREENODE_H
