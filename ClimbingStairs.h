//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_CLIMBINGSTAIRS_H
#define LEETCODE150_CPP_R1_CLIMBINGSTAIRS_H


class ClimbingStairs {
public:
    int climbStairs(int n) {
        if (n <= 0)
            return 0;
        if (n == 1)
            return 1;
        int result = 0;
        int prev1 = 1;
        int prev2 = 1;
        for (int i = 2; i <= n; ++i) {
            result = prev1 + prev2;
            prev2 = prev1;
            prev1 = result;
        }
        return result;
    }
};


#endif //LEETCODE150_CPP_R1_CLIMBINGSTAIRS_H
