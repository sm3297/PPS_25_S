#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> n(5);
    for(int i = 0; i < n.size(); i++){
        cin >> n[i];
    }
    int sum = 0;
    for(int i = 0; i < n.size(); i++){
        sum += n[i]*n[i];
    }
    cout << sum % 10 << endl;
    return 0;
}

