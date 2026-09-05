#include <bits/stdc++.h>
using namespace std;
#define endl " "

string v{}; char lastString{};
long long sequence{}, lastSequence{};


int main() {

    cin >> v;

    for (int i=0; i<v.size(); i++) {

        if (lastString == v[i]) {
            sequence++;
        } else {
            sequence = 1;
        }

        lastString = v[i];

        if (sequence < lastSequence) {
            sequence = lastSequence;
        }

        lastSequence = sequence;


    }

    cout << sequence;

}