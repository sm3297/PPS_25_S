#include <iostream>
#include <vector>
#include <string>
using namespace std;

string solution(vector<int> arr) {
    string answer = "mixed";
    
    bool isAscending = true;
    for (int i = 0; i < 7; i++) {
        if (arr[i] + 1 != arr[i + 1]) {
            isAscending = false;
            break;
        }
    }
    
    bool isDescending = true;
    for (int i = 0; i < 7; i++) {
        if (arr[i] - 1 != arr[i + 1]) {
            isDescending = false;
            break;
        }
    }
    
    if (isAscending) {
        answer = "ascending";
    } 
    else if (isDescending) {
        answer = "descending";
    }
    
    return answer;
}
int main() {
    vector<int> arr(8);
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    
    string result = solution(arr);
    cout << result << endl;
    
    return 0;
}