#include <bits/stdc++.h>
using namespace std;
#define endl  " "

long long value = 0;

int main() {

    cin >> value;

    cout << value << endl;

    while (value != 1){
        if (value % 2 == 0) { //par
            value = value/2;
            cout << value << endl;
        } else { //impar
            value = (value * 3) + 1;
            cout << value << endl;
        }
    }


}