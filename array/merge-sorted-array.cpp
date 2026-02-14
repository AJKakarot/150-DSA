#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        // Compare from back and place largest element
        while (i >= 0 && j >= 0) {
            if (nums1[i] >= nums2[j]) {
                nums1[idx--] = nums1[i--];
            } else {
                nums1[idx--] = nums2[j--];
            }
        }

        // Copy remaining elements from nums2 (if any)
        while (j >= 0) {
            nums1[idx--] = nums2[j--];
        }
    }
};

int main() {
    Solution obj;

    // Example
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};

    int m = 3;  // valid elements in nums1
    int n = 3;  // elements in nums2

    obj.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}
