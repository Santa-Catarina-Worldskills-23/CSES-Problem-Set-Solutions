#include <bits/stdc++.h>
using namespace std;
#define endl " "

long long n{}, result = 1;

int main() {

    cin >> n;

    for (long long i{}; i < n; i++) {
        result = (result * 2) % (1000000007);
    }

    cout << "\n" << result;
}