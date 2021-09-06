//
// Created by User on 05.09.2021.
//

#ifndef UNTITLED4_SINGLENUMBER_H
#define UNTITLED4_SINGLENUMBER_H


class Task4 {
public:
    static int singleNumber(vector<int>& nums) {
        int mask = 0;
        for(int num:nums)
            mask ^= num;

        return mask;
    }
};


#endif //UNTITLED4_SINGLENUMBER_H
