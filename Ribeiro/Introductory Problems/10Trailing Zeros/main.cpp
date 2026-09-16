#include <bits/stdc++.h>
using namespace std;
#define endl " "

long long n{}, result{}, expTest{};

int main() {

    cin >> n;

    result = n/5;

    for (long long i = 1; expTest<n; i++){

        expTest = pow(5, i);

        // cout << expTest;

        if (expTest<n) {
            result += n/expTest;
        }

    }

    cout << result;
}