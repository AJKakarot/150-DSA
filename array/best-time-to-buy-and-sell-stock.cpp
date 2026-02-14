#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < buy_price) {
                buy_price = prices[i];
            } else {
                int current_profit = prices[i] - buy_price;
                profit = max(current_profit, profit);
            }
        }

        return profit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int ans = obj.maxProfit(prices);

    cout << "Maximum profit: " << ans << endl;

    return 0;
}
