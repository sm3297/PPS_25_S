//다시 제출 : 17번 문제랑 19번 문제 헷갈렸습니다.
// 수정 부분 : 17번  --> 19
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> n(3);
    cin >> n[0];
    cin >> n[1];
    cin >> n[2];
    
    int multiply = n[0] * n[1] * n[2];
    vector<int> digit_count(10, 0);
    while (multiply > 0) {
        int digit = multiply % 10;
        digit_count[digit]++;
        multiply /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << digit_count[i] << endl;
    }
    return 0;
}

