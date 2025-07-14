#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double n = 0.0;
        char op;

        cin >> n; 

        while (cin.peek() == ' ' || cin.peek() == '@' || cin.peek() == '%' || cin.peek() == '#') {
            cin >> op;

            if (op == '@') {
                n *= 3; 
            } 
            else if (op == '%') {
                n += 5; 
            } 
            else if (op == '#') {
                n -= 7; 
            }
            else break;
        }
       printf("%.2f\n", n); 
       
    }
    return 0;
}