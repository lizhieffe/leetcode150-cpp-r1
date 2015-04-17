//
// Created by Zhi Li on 4/17/15.
//

#ifndef LEETCODE150_CPP_R1_GREYCODE_H
#define LEETCODE150_CPP_R1_GREYCODE_H

#include <vector>
using std::vector;

#include <math.h>

class GreyCode {
public:
    vector<int> grayCode(int n) {
        vector<int> result;

        if (n <= 0) {
            result.push_back(0);
            return result;
        }

        vector<int> prevResult = grayCode(n - 1);

        for (vector<int>::iterator it = prevResult.begin(); it != prevResult.end(); ++it)
            result.push_back(*it);
        for (vector<int>::iterator it = prevResult.end() - 1; it >= prevResult.begin(); --it)
            result.push_back(pow(2, n - 1) + *it);
        return result;
    }
};


#endif //LEETCODE150_CPP_R1_GREYCODE_H
