//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_GASSTATION_H
#define LEETCODE150_CPP_R1_GASSTATION_H

#include <vector>
using std::vector;

class GasStation {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int totalGas = 0;
        int totalCost = 0;
        int minTotal = 0;
        int index = 0;
        for (int i = 0; i < gas.size(); ++i) {
            totalGas += gas[i];
            totalCost += cost[i];
            if (minTotal > totalGas - totalCost) {
                index = i + 1;
                minTotal = totalGas - totalCost;
            }
        }
        return totalGas >= totalCost ? index : -1;
    }
};


#endif //LEETCODE150_CPP_R1_GASSTATION_H
