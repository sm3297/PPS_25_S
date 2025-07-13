#include <iostream>

using namespace std;

int main(){

    int count[42] = {0};
    int num;

    for (int i = 0; i < 10; i++) {
        cin >> num; 
        count[num % 42]++; 
    }

    int distinctCount = 0;

    for (int i = 0; i < 42; i++) {
        if (count[i] > 0) {
            distinctCount++; 
        }
    }

    cout << distinctCount << endl;

    return 0;
}