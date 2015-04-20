//
// Created by Zhi Li on 4/19/15.
//

#ifndef LEETCODE150_CPP_R1_FINDPEAKELEMENT_H
#define LEETCODE150_CPP_R1_FINDPEAKELEMENT_H

#include <vector>
using std::vector;

class FindPeakElement {
public:
    int findPeakElement(vector<int>& nums) {
        return findPeakElement(nums, 0, nums.size() - 1);
    }

private:
    int findPeakElement(vector<int>& nums, int beg, int end) {
        if (beg > end || beg < 0 || end >= nums.size())
            return -1;
        if (beg == end)
            return beg;
        if (end - beg == 1) {
            if (nums[beg] == nums[end])
                return -1;
            else
                return nums[beg] > nums[end] ? beg : end;
        }
        int mid = beg + (end - beg) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return mid;
        if (nums[mid] > nums[mid - 1])
            return findPeakElement(nums, mid + 1, end);
        else
            return findPeakElement(nums, beg, mid - 1);
    }
};


#endif //LEETCODE150_CPP_R1_FINDPEAKELEMENT_H
