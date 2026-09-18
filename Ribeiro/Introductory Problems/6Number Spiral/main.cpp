#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl "\n"

long long t{}, i{}, j{};
vector<long long> result;
bool iPar{}, jPar{};

int main() {

    cin >> t;

    vector<long long> v(2);

    for (long long n{}; n<t; n++) {
        
        cin >> i >> j;

        if (i == j) {
            result.push_back((i * i) - (j - 1));
        }

        if (i % 2 == 0) {
            iPar = true;
        } else {
            iPar = false;
        }
        
        if (j % 2 == 0) {
            jPar = true;
        } else {
            jPar = false;
        }

        if (i > j) {
            if (iPar) {
                result.push_back((i * i) - (j-1));
            } else {
                result.push_back((i-1) * (i-1) + (j));
            }
        } else if (j > i) {
            if (jPar) {
                result.push_back((j-1) * (j-1) + (i));
            } else {
                result.push_back((j * j) - (i-1));
            }
        }
    }

    for (long long n{}; n<t; n++) {
        cout << result[n] << endl;
    }
}