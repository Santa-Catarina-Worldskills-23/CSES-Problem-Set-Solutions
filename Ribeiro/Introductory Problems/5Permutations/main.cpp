#include <bits/stdc++.h>
using namespace std;
#define endl " "
 
long long permutation{}, newPermutation{};
vector<int> leftVector, rightVector;
 
int main() {
 
    cin >> permutation;
 
    for (int i{}; i <= permutation; i++) {
 
        if (i % 2 == 0 && i != 0) {
        leftVector.push_back(i);
        }
 
        if (i % 2 == 1) {
        rightVector.push_back(i);
        }
    }
 
    if (permutation < 4 && permutation > 1) {
        cout << "NO SOLUTION";
    } else {
        for (int i{}; i < leftVector.size(); i++) {
            cout << leftVector[i] << endl;
        }
    
        for (int i{}; i < rightVector.size(); i++) {
            cout << rightVector[i] << endl;
        } 
    }
}
