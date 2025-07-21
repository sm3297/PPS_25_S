#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        
        int absentCount = 0; 
        int lateCount = 0;  

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'A') {
                absentCount++;
                if (absentCount >= 2) {
                    return false;
                }
            }

            if (s[i] == 'L') {
                lateCount++;
                if (lateCount >= 3) {
                    return false; 
                }
            } else {
                lateCount = 0; 
            }
        }

        return true; 

    }
};

int main() {
    Solution solution;
    //string s = "PPALLP";
    string s = "PPALLL";

    bool result = solution.checkRecord(s);
    cout << (result ? "true" : "false") << endl;

    return 0;
}