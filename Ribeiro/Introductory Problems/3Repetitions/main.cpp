#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

string v{}; char lastString{};
long long sequence{}, lastSequence{};


int main() {

    cin >> v;

    for (int i=0; i<v.size(); i++) {

        if (lastString == v[i]) {
            sequence++;

            if (sequence > lastSequence) {
                lastSequence = sequence;
            }

        } else {
            sequence = 1;
        }

        lastString = v[i];

    }

    if (lastSequence == 0) {
        lastSequence = 1;
    }

    cout << lastSequence << endl;

}