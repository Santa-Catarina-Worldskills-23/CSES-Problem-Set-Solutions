#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl "\n";

int graySize = 11, base{};
bool encontrou{};


int main() {

    cin >> graySize;

    vector<int> abadi;

    int p{}, multiplicador{};

    for (int i{}; i<pow(2,graySize); i++) {
        
        p = i;

        for (int n{}; n<graySize; n++) {
            multiplicador = 16 - graySize;
            if (p - pow(2, graySize) >= 0) {
                abadi.push_back(1);
            } else {
                abadi.push_back(0);
            }
            multiplicador -= 1;
        }

        for (int n{}; n<abadi.size(); n++) {
            cout << abadi[n];
        }
    }
}