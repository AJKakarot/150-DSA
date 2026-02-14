#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;

        int i = 0; // slow pointer

        for (int j = 1; j < n; j++) { // fast pointer
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1; // length of unique elements
    }
};

int main() {
    Solution obj;

    // Example sorted array
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int newLength = obj.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nNew length: " << newLength;

    return 0;
}
