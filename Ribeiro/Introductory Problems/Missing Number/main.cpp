#include <bits/stdc++.h>
using namespace std;
#define endl " "

int value = 0;

int main() {

    vector<int> v;
    cin >> value;

    for (int i=2; i<value; i++) {
        v.push_back(i);
        cout << v[i];
    }

}