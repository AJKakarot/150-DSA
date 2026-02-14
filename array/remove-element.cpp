#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k; // new size after removal
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 2, 2, 3, 4, 3};
    int val = 3;

    int newLength = obj.removeElement(nums, val);

    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nNew length: " << newLength;

    return 0;
}
