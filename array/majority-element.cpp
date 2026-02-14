#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maj = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                maj = nums[i];
                count = 1;
            }
            else if (nums[i] == maj) {
                count++;
            }
            else {
                count--;
            }
        }
        return maj;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = obj.majorityElement(nums);

    cout << "Majority element: " << result;

    return 0;
}
