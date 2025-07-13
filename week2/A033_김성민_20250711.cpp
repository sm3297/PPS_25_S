#include <iostream>

using namespace std;

int main(){

    int scores[5][4];
    int totalScores[5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> scores[i][j];
            totalScores[i] += scores[i][j];
        }
    }

    int winnerIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (totalScores[i] > totalScores[winnerIndex]) {
            winnerIndex = i;
        }
    }

    cout << winnerIndex + 1 << " " << totalScores[winnerIndex] << endl;

    return 0;
}