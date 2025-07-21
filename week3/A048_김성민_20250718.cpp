#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; 
    int groupWordCount = 0; // 그룹 단어의 개수 초기화

    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word; // 단어 입력
        bool isGroupWord = true; // 그룹 단어 여부 초기화

        for (size_t j = 0; j < word.length(); ++j) {
            if (j > 0 && word[j] != word[j - 1] && word.find(word[j], 0) < j) {
                isGroupWord = false;
                break;
            }
        }

        if (isGroupWord) {
            groupWordCount++; 
        }
    }

    cout << groupWordCount << endl;

    return 0;
}