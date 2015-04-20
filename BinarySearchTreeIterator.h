//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_BINARYSEARCHTREEITERATOR_H
#define LEETCODE150_CPP_R1_BINARYSEARCHTREEITERATOR_H

#include "utils/TreeNode.h"

#include <list>
using std::list;

class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        if (root != 0)
            addAllLeftNodes(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return stack.size() != 0;
    }

    /** @return the next smallest number */
    int next() {
        if (hasNext() == false)
            return 0;
        TreeNode tmpLast = stack.back();
        stack.pop_back();
        addAllLeftNodes(tmpLast.right);
        return tmpLast.val;
    }
private:
    list<TreeNode> stack;
    void addAllLeftNodes(TreeNode *node) {
        while (node != 0) {
            stack.push_back(*node);
            node = node->left;
        }
    }
};


#endif //LEETCODE150_CPP_R1_BINARYSEARCHTREEITERATOR_H
