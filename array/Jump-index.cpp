#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();

        // Goal initially last index
        int final_position = n - 1;

        // Traverse from second last index to start
        for (int idx = n - 2; idx >= 0; idx--) {

            // If current index can reach goal
            if (idx + nums[idx] >= final_position) {
                final_position = idx;   // Move goal backward
            }
        }

        // If goal becomes 0 → reachable
        return final_position == 0;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {2, 3, 1, 1, 4};

    if (obj.canJump(nums))
        cout << "Reachable (True)" << endl;
    else
        cout << "Not Reachable (False)" << endl;

    return 0;
}
