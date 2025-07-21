#include <iostream>
using namespace std;

int main() {
    int N, mood;
    cin >> N >> mood;

    double prob[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> prob[i][j];
        }
    }

    double dp[101][2] = {0}; 
    dp[0][mood] = 1.0;

    for (int i = 1; i <= N; ++i) {
        dp[i][0] = dp[i - 1][0] * prob[0][0] + dp[i - 1][1] * prob[1][0];
        dp[i][1] = dp[i - 1][0] * prob[0][1] + dp[i - 1][1] * prob[1][1];
    }

    cout << static_cast<int>(dp[N][0] * 1000 + 0.5) << endl;
    cout << static_cast<int>(dp[N][1] * 1000 + 0.5) << endl;

    return 0;
}
 