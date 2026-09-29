#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl "\n";

int graySize{};

int main() {

    cin >> graySize;

    vector<int> abadi, convertido;

    int p{}, multiplicador{};

    for (int i{}; i<pow(2,graySize); i++) {
        
        p = i;
        abadi.clear();
        convertido.clear();
        multiplicador = graySize - 1;

        for (int n{}; n<graySize; n++) {
            if (p - pow(2, multiplicador) >= 0) {
                abadi.push_back(1);
                p -= pow(2, multiplicador);
            } else {
                abadi.push_back(0);
            }
            multiplicador -= 1;
        }

        for (int n{}; n<graySize; n++) {
            convertido.push_back(abadi[n-1] ^ abadi[n]);
        }

        for (int n{}; n<convertido.size(); n++) {
            cout << convertido[n];
        }
        cout << "\n";
    }
}
