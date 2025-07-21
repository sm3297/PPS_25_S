#include <iostream>
#include <string>

using namespace std;

int main(){

    string password;
    while (true) {
        cin >> password; 
        if (password == "end") break; 

        bool hasVowel = false; 
        int vowelCount = 0; 
        int consonantCount = 0; 
        bool isValid = true; 

        for (size_t i = 0; i < password.length(); ++i) {
            char c = password[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                hasVowel = true;
                vowelCount++;
                consonantCount = 0; // 자음 카운트 초기화
            } else {
                consonantCount++;
                vowelCount = 0; // 모음 카운트 초기화
            }

            if (vowelCount >= 3 || consonantCount >= 3) {
                isValid = false;
                break;
            }

            if (i > 0 && c == password[i - 1] && !(c == 'e' || c == 'o')) {
                isValid = false;
                break;
            }
        }

        if (!hasVowel || !isValid) {
            cout << "<" << password << "> is not acceptable." << endl;
        } else {
            cout << "<" << password << "> is acceptable." << endl;
        }
    }

    return 0;

}