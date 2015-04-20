//
// Created by Zhi Li on 4/20/15.
//

#ifndef LEETCODE150_CPP_R1_PERMUTATION_H
#define LEETCODE150_CPP_R1_PERMUTATION_H

#include <vector>
using std::vector;

class Permutation {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > result;
        if (num.size() == 0) {
            vector<int> emptyVector;
            result.push_back(emptyVector);
        }
        for (int i = 0; i < num.size(); ++i) {
            if (i == 0 || num[i] != num[i - 1]) {
                int head = num[i];
                num.erase(num.begin() + i);
                vector<vector<int> > solution = permute(num);
                for (int j = 0; j < solution.size(); ++j) {
                    solution[j].insert(solution[j].begin(), head);
                    result.push_back(solution[j]);
                }
                num.insert(num.begin() + i, head);
            }
        }
        return result;
    }
};


#endif //LEETCODE150_CPP_R1_PERMUTATION_H
