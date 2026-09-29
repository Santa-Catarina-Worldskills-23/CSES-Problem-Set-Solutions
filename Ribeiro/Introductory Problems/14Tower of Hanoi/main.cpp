#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "

int value{}, movA{}, movB{}, n{};

int main() {

    cin >> value;

    cout << ((1 << value) - 1) << endl;

    for(int i{}; i<(1 << value) - 1; i++) {
        if (i % 2 == 0) {
            switch(n % 3) {
                case 0:
                    movA = 1;
                    movB = 2;
                    break;
                case 1:
                    movA = 2;
                    movB = 3;
                    break;
                case 2:
                    movA = 3;
                    movB = 1;
                    break;
            }
            n++;
            cout << movA << spc << movB << endl;
        } else {
            
        }
    }

}