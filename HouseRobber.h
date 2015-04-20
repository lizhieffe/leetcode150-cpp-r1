//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_HOUSEROBBER_H
#define LEETCODE150_CPP_R1_HOUSEROBBER_H

#include<vector>
using std::vector;

#include <algorithm>
using std::max;

class HouseRobber {
public:
    int rob(vector<int> &num) {
        if (num.size() == 0)
            return 0;
        vector<int> maxSoFar(num.size());
        int result = INT_MIN;
        for (int i = 0; i < num.size(); ++i) {
            if (i <= 1)
                maxSoFar[i] = num[i];
            else if (i == 2)
                maxSoFar[i] = num[i] + maxSoFar[i - 2];
            else
                maxSoFar[i] = num[i] + max(maxSoFar[i - 3], maxSoFar[i - 2]);
            result = max(result, maxSoFar[i]);
        }
        return result;
    }
};


#endif //LEETCODE150_CPP_R1_HOUSEROBBER_H
