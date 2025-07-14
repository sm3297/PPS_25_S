#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0; 
        }
        digits.insert(digits.begin(), 1);
        return digits;  
    }
};

int main() {
    Solution solution;
    //vector<int> digits = {1, 2, 3};
    //vector<int> digits = {4, 3, 2, 1};
    vector<int> digits = {9};
    vector<int> result = solution.plusOne(digits);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}