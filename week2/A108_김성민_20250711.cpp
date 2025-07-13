#include <iostream>
#include <string>

using namespace std;

int main(){

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string original = to_string(N);
        string reversed = string(original.rbegin(), original.rend());

        int sum = N + stoi(reversed);

        string sumStr = to_string(sum);
        string reversedSum = string(sumStr.rbegin(), sumStr.rend());

        if (sumStr == reversedSum) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;

}