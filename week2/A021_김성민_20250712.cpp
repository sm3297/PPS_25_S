#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalPlugs = 0; 
    for (int i = 0; i < N; i++) {
        int plugs;
        cin >> plugs;
        totalPlugs += plugs;
    }

    cout << totalPlugs - (N - 1) << endl;

    return 0;
}