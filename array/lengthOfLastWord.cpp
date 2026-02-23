#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length++;
            }
            else if (counting) {
                break;
            }
        }
        
        return length;
    }
};

int main() {
    Solution obj;
    
    string s;
    cout << "Enter string: ";
    getline(cin, s);   // important: takes full line including spaces
    
    int result = obj.lengthOfLastWord(s);
    
    cout << "Length of last word: " << result << endl;
    
    return 0;
}