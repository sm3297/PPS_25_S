#include <iostream>
#include <string>

using namespace std;

int main(){

    int N;
    cin >> N; 

    while (N--) {
        string result;
        cin >> result; 

        int score = 0; 
        int n = 0; // 연속된 O의 개수

        for (char c : result) {
            if (c == 'O') {
                n++; 
                score += n; 
            } else {
                n = 0;
            }
        }

        cout << score << endl; 
    }

    return 0;

}