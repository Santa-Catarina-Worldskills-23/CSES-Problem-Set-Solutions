#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long difference{}, moves{},arrayLength{}, value{}, lastValue{};

int main() {

    cin >> arrayLength;

    for (int i=0; i<arrayLength; i++) {
        cin >> value;

        difference = lastValue - value;
        if (difference > 0) {
            value += difference;
            moves += difference;
        }
        lastValue = value;
    }

    cout << moves << endl;


}