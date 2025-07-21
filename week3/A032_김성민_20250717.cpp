#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int k, n;
        cin >> k >> n;

        int dp[15][15] = {0}; // 0층부터 14층까지, 1호부터 14호까지

        for (int i = 1; i <= n; ++i) {
            dp[0][i] = i; 
        }

        for (int i = 1; i <= k; ++i) {
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        cout << dp[k][n] << endl;
    }

    return 0;
}