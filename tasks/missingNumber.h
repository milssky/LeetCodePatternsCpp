//
// Created by User on 04.09.2021.
//

#ifndef UNTITLED4_MISSINGNUMBER_H
#define UNTITLED4_MISSINGNUMBER_H
class Task2 {
public:
    static int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto i: nums) {
            sum += i;
        }
        return n * (n+1) / 2 - sum;
    }
};
#endif //UNTITLED4_MISSINGNUMBER_H
