#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    string bookTitles[1000];
    int count[1000] = {0};

    for (int i = 0; i < N; i++) {
        cin >> bookTitles[i];
        count[i] = 1; 
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (bookTitles[i] == bookTitles[j]) {
                count[i]++;
                count[j] = -1; 
            }
        }
    }

    int maxCount = 0;
    string bestBook;

    for (int i = 0; i < N; i++) {
        if (count[i] > maxCount || (count[i] == maxCount && bookTitles[i] < bestBook)) {
            maxCount = count[i];
            bestBook = bookTitles[i];
        }
    }

    cout << bestBook << endl;

    return 0;
}

