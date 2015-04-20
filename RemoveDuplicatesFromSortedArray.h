//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_REMOVEDUPLICATESFROMSORTEDARRAY_H
#define LEETCODE150_CPP_R1_REMOVEDUPLICATESFROMSORTEDARRAY_H


class RemoveDuplicatesFromSortedArray {
public:
    int removeDuplicates(int A[], int n) {
        if (n == 0)
            return 0;
        int newIndex = 1;
        for (int i = 1; i < n; ++i) {
            if (A[i] != A[newIndex - 1])
                A[newIndex++] = A[i];
        }
        return newIndex;
    }
};


#endif //LEETCODE150_CPP_R1_REMOVEDUPLICATESFROMSORTEDARRAY_H
