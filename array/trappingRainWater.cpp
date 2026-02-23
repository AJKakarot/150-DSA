#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate total trapped rain water
int trapRainWater(vector<int>& height) {

    int n = height.size();

    if (n <= 1)
        return 0;

    vector<int> leftMax(n);
    vector<int> rightMax(n);

    // Fill leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Fill rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int totalWater = 0;

    for (int i = 0; i < n; i++) {
        totalWater += min(leftMax[i], rightMax[i]) - height[i];
    }

    return totalWater;
}

int main() {

    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int result = trapRainWater(height);

    cout << "Total Water Trapped = " << result << endl;

    return 0;
}