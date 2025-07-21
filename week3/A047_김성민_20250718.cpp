#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    for (size_t i = 0; i < n.length(); i += 10) {
        cout << n.substr(i, 10) << endl; // 10글자씩 잘라서 출력
    }

    return 0;
}