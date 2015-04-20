//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_REVERSEBITS_H
#define LEETCODE150_CPP_R1_REVERSEBITS_H

#include <inttypes.h>
#include <math.h>

class ReverseBits {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int digits = 0;
        while (n != 0) {
            ++digits;
            result = result * 2 + n % 2;
            n = n / 2;
        }
        result *= pow(2, 32 - digits);
        return result;
    }
};


#endif //LEETCODE150_CPP_R1_REVERSEBITS_H
