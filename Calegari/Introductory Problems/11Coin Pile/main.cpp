#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {

    long long valor;
    long long x = 0;
    long long y = 0;
    cin >> valor;

    for (long long i = 0; i < valor; i++) {
        cin >> x >> y;

            if((x+y) % 3 == 0 && x <= 2 * y && y <= 2 * x ){
                cout << "YES" << endl;
            }else{
                    cout << "NO" << endl;
                
            }

        }
    }