//
// Created by User on 06.09.2021.
//

#ifndef UNTITLED4_BESTTIMETOBUYANDSELLSTOCK_H
#define UNTITLED4_BESTTIMETOBUYANDSELLSTOCK_H


class Task6 {
public:
    static int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currentMin = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            int price = prices[i];
            maxProfit = max(maxProfit, price - currentMin);
            currentMin = min(currentMin, price);
        }
        return maxProfit;
    }
};


#endif //UNTITLED4_BESTTIMETOBUYANDSELLSTOCK_H
