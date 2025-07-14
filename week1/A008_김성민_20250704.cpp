#include <iostream>
#include <vector>
#include <iomanip> 
using namespace std;


int main() {
    int C;
    cin >> C; 

    while (C--) {
        int N;
        cin >> N; 
        vector<int> scores(N);
        double sum = 0.0;

        for (int i = 0; i < N; ++i) {
            cin >> scores[i];
            sum += scores[i];
        }

        double average = sum / N; 
        int count_above_average = 0;

        for (int score : scores) {
            if (score > average) {
                count_above_average++;
            }
        }
        
        double percentage = (static_cast<double>(count_above_average) / N) * 100.0; 
        cout << fixed << setprecision(3) << percentage << "%" << endl; 
    }

    return 0;
}