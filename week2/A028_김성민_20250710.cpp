#include <iostream>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    if (a.length() < b.length()) {
        swap(a, b);
    }

    while (b.length() < a.length()) {
        b = '0' + b;
    }

    string result = "";
    int carry = 0;

    for (int i = a.length() - 1; i >= 0; --i) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result = char(sum % 10 + '0') + result; 
        carry = sum / 10;
    }

    if (carry > 0) {
        result = char(carry + '0') + result;
    }

    cout << result << endl;

    return 0;
    
}


