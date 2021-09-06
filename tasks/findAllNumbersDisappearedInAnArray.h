//
// Created by User on 05.09.2021.
//

#ifndef UNTITLED4_FINDALLNUMBERSDISAPPEAREDINANARRAY_H
#define UNTITLED4_FINDALLNUMBERSDISAPPEAREDINANARRAY_H


class Task3 {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()) {
            int pos = nums[i] - 1;
            if (nums[i] != nums[pos])
                swap(nums[i], nums[pos]);
            else
                i += 1;
        }

        vector<int> miss;
        for(i = 0; i < nums.size(); i++) {
            if (nums[i] != (i + 1))
                miss.push_back(i+1);
        }
        return miss;
    }
};


#endif //UNTITLED4_FINDALLNUMBERSDISAPPEAREDINANARRAY_H
