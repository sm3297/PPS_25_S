#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int y_cost = 0, m_cost = 0;

    for (int i = 0; i < N; i++) {
        int time;
        cin >> time;

        y_cost += (time / 30 + 1) * 10; 
        m_cost += (time / 60 + 1) * 15;
    }

    if (y_cost < m_cost) 
        cout << "Y " << y_cost << endl;
    else if (m_cost < y_cost) 
        cout << "M " << m_cost << endl;
    else 
        cout << "Y M " << y_cost << endl; 
    

    return 0;
}
