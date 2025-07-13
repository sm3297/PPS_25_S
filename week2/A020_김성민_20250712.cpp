#include <iostream>
using namespace std;

int main() {
    int max_people = 0; 
    int current_people = 0; 

    for (int i = 0; i < 4; i++) {
        int down, up;
        cin >> down >> up; 

        current_people -= down; 
        current_people += up; 

        if (current_people > max_people) {
            max_people = current_people; 
        }
    }

    cout << max_people << endl; 
    return 0;
}