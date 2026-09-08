#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long value = 0, vectorValue = 0, realSum = 0, expecSum = 0;


int main() {

    vector<int> v;
    cin >> value;
    value -= 1;

    for (int i=0; i<value; i++) {
        cin >> vectorValue;
        v.push_back(vectorValue);
    }

    for (int i=0; i<value; i++){
    realSum += v[i];
    }

    value += 1;

    for(int i=0; i<value; i++) {
    expecSum += i+1;
    }

    cout << expecSum - realSum;
    
}