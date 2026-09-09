#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl " "

int t{}, i{}, j{}, result{};

int main() {

    cin >> t;

    vector<int> v(2);

    for (int n{}; n<t; n++) {
        
        cin >> i >> j;

        if (i == j) {
            result = pow(i, 2) - (j - 1);
        }

        cout << result;
    }


}