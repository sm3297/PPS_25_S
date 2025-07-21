#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word; 

    for (char& c : word) {
        if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + 23) % 26 + 'A'; // 3문자 뒤로 이동
        }
    }

    cout << word << endl;

    return 0;
}