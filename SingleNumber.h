//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_SINGLENUMBER_H
#define LEETCODE150_CPP_R1_SINGLENUMBER_H


class SingleNumber {
public:
    int singleNumber(int A[], int n) {
        int result = 0;
        for (int i = 0; i < n; ++i)
            result ^= A[i];
        return result;
    }
};


#endif //LEETCODE150_CPP_R1_SINGLENUMBER_H
