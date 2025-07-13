#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 100) {
        cout << n << endl; 
        return 0;
    }

    int count = 99; 
    for (int i = 100; i <= n; i++) {
        int a = i / 100; 
        int b = (i / 10) % 10; 
        int c = i % 10; 

        if ((b - a) == (c - b)) { 
            count++;
        }
    }

    cout << count << endl;

    return 0;
}