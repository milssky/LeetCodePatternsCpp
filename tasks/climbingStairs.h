//
// Created by User on 06.09.2021.
//

#ifndef UNTITLED4_CLIMBINGSTAIRS_H
#define UNTITLED4_CLIMBINGSTAIRS_H


class Task5 {
public:
    static int climbStairs(int n) {
        vector<int> steps(n+1, 0);
        steps[0] = 1;
        steps[1] = 2;
        for(int i = 2; i<n; i++)
            steps[i] = steps[i-1] + steps[i-2];
        return steps[n-1];
    }
};


#endif //UNTITLED4_CLIMBINGSTAIRS_H
