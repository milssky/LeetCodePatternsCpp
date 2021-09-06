//
// Created by User on 04.09.2021.
//

#ifndef UNTITLED4_CONTAINSDUPLICATE_H
#define UNTITLED4_CONTAINSDUPLICATE_H
#include <unordered_set>
#include <vector>
using namespace std;

class Task1 {
public:
    static bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        return nums_set.size() != nums.size();
    }
};


#endif //UNTITLED4_CONTAINSDUPLICATE_H
