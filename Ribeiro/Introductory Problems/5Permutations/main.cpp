#include <bits/stdc++.h>
using namespace std;
#define endl " "

long long permutation{};
vector<int> middleVector, leftVector, rightVector;

int main() {

    cin >> permutation;

    for (int i{}; i < permutation - 5; i++) {

        if (i > 4){

            if (i % 2 == 0) {
            leftVector.push_back(i);
            }

            if (i % 2 == 1) {
            rightVector.push_back(i);
            }

        }


    }

    for (int i{}; i < (permutation - 5)/2; i++) {
        cout << leftVector[i] << endl;
    }

    std::reverse(rightVector.begin(), rightVector.end());

    for (int i{}; i < (permutation - 5)/2; i++) {
        cout << rightVector[i] << endl;
    }

}