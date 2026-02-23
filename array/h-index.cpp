#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        // Step 1: Create frequency array of size n+1
        vector<int> fre(n + 1, 0);

        // Step 2: Fill frequency array
        for (int i = 0; i < n; i++) {
            if (citations[i] >= n)
                fre[n]++;
            else
                fre[citations[i]]++;
        }

        // Step 3: Traverse from back
        int num = 0;
        for (int i = n; i >= 0; i--) {
            num += fre[i];   // papers having citations >= i
            if (num >= i)
                return i;
        }

        return 0;
    }
};

int main() {
    Solution obj;

    vector<int> citations = {3, 0, 6, 1, 5};

    cout << "H-Index = " << obj.hIndex(citations);

    return 0;
}