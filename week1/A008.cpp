#include <iostream>
#include <vector>
#include <iomanip> // for std::setprecision
using namespace std;


int main() {
    int C;
    cin >> C; // Read the number of test cases

    while (C--) {
        int N;
        cin >> N; // Read the number of students
        vector<int> scores(N);
        double sum = 0.0;

        for (int i = 0; i < N; ++i) {
            cin >> scores[i]; // Read each student's score
            sum += scores[i]; // Calculate the total score
        }

        double average = sum / N; // Calculate the average score
        int count_above_average = 0;

        for (int score : scores) {
            if (score > average) {
                count_above_average++; // Count how many scores are above average
            }
        }

        double percentage = (static_cast<double>(count_above_average) / N) * 100.0; // Calculate the percentage
        cout << fixed << setprecision(3) << percentage << "%" << endl; // Output the result with 3 decimal places
    }

    return 0;
}