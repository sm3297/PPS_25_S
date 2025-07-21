#include <vector>
#include <iostream>
using namespace std;

// Code
// Testcase
// Test Result
// Test Result
// 728. Self Dividing Numbers
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
// A self-dividing number is not allowed to contain the digit zero.

// Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right] (both inclusive).

 

// Example 1:

// Input: left = 1, right = 22
// Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
// Example 2:

// Input: left = 47, right = 85
// Output: [48,55,66,77]
 

// Constraints:

// 1 <= left <= right <= 104

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> result;

        for (int num = left; num <= right; ++num) {
            int original = num;
            bool isSelfDividing = true;

            while (num > 0) {
                int digit = num % 10;
                if (digit == 0 || original % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                num /= 10;
            }

            if (isSelfDividing) {
                result.push_back(original);
            }

            num = original; // Reset num for the next iteration
        }

        return result;

    }
};

int main(){
    Solution solution;
    //int left = 1, right = 22;
    int left = 47, right = 85;
    vector<int> result = solution.selfDividingNumbers(left, right);

    cout << "[";
    for (int num : result) {
        cout << num << ",";
        if(num == result.back()) {
            cout << "\b"; 
        }
    }
    cout << "]" << endl;

    return 0;
}