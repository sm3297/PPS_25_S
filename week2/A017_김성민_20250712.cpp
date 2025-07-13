#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int digitCount[10] = {0};

    while (N > 0) {
        digitCount[N % 10]++;
        N /= 10;
    }

    int sixNineCount = (digitCount[6] + digitCount[9] + 1) / 2;

    int maxSets = sixNineCount;
    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) {
            maxSets = max(maxSets, digitCount[i]);
        }
    }

    cout << maxSets << endl;

    return 0;
}