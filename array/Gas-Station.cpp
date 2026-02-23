#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();

        int totalGas = 0, totalCost = 0;

        // Step 1: Check if solution possible
        for (int i = 0; i < n; i++) {
            totalGas += gas[i];
            totalCost += cost[i];
        }

        if (totalGas < totalCost) {
            return -1;
        }

        // Step 2: Find starting index
        int currentGas = 0;
        int startIndex = 0;

        for (int i = 0; i < n; i++) {

            currentGas += gas[i] - cost[i];

            if (currentGas < 0) {
                startIndex = i + 1;
                currentGas = 0;
            }
        }

        return startIndex;
    }
};

int main() {

    Solution obj;

    vector<int> gas  = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int result = obj.canCompleteCircuit(gas, cost);

    if (result == -1)
        cout << "No possible starting index (-1)" << endl;
    else
        cout << "Start at index: " << result << endl;

    return 0;
}