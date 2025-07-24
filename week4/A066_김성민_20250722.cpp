#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string N;
    cin >> N;

    vector<char> digits(N.begin(), N.end()); 

    sort(digits.rbegin(), digits.rend()); // 내림차순으로 정렬

    for (char digit : digits) {
        cout << digit;
    }
    
    cout << endl; 

    return 0;

}