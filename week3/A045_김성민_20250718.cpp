#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int count[26] = {0}; 

    for (char c : word) {
        if (isalpha(c)) {
            count[toupper(c) - 'A']++;
        }
    }

    int maxCount = 0;
    char maxChar = '?';
    bool isDuplicate = false;

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = 'A' + i;
            isDuplicate = false; 
        } else if (count[i] == maxCount && count[i] > 0) {
            isDuplicate = true;
        }
    }

    cout << (isDuplicate ? '?' : maxChar) << endl;

    return 0;
}