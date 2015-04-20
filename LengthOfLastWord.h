//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_LENGTHOFLASTWORD_H
#define LEETCODE150_CPP_R1_LENGTHOFLASTWORD_H

#include <string>
using std::string;

class LengthOfLastWord {
public:
    int lengthOfLastWord(string s) {
        int beg = -1;
        int result = 0;
        for (string::iterator it = s.begin(); it != s.end(); ++it) {
            if (*it == ' ') {
                if (beg != -1) {
                    result = std::distance(s.begin(), it) - beg;
                    beg = -1;
                }
            }
            else {
                if (beg == -1)
                    beg = std::distance(s.begin(), it);
            }
        }
        if (beg != -1)
            return s.length() - beg;
        else
            return result;
    }
};


#endif //LEETCODE150_CPP_R1_LENGTHOFLASTWORD_H
