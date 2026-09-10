#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl "\n"
#define spc " "

vector<int> impar, par;
int n{}, diff{}, sumPar{}, sumImpar{}, sumTotal{}, troca{};

int main(){
    
    cin >> n;

    for (int i{}; i < n; i++) {
        if (i != 0){
            if (i % 2 == 0) {
                par.push_back(i);
            } else {
                impar.push_back(i);
            }
        }
        sumTotal += i;
    }

    cout << par.size() << endl;

    for (int i{}; i < par.size(); i++) {
        cout << par[i] << spc;
        sumPar += par[i];
    }

    cout << endl << impar.size() << endl;

    for (int i{}; i < impar.size(); i++) {
        cout << impar[i] << spc;
        sumImpar += impar[i];
    }

    cout << endl << sumPar << spc << sumImpar << spc << sumTotal;

    if (sumTotal % 2 != 0) {
        cout << endl << "NO" << endl;
    } else {
        cout << endl << "YES" << endl;;

        diff = abs(sumImpar - sumPar);

        for (int i = impar.size(); i >= 0; i--) {
            troca = par[i];
            par[i] = impar[i];
            impar[i] = troca;
        }
    }

    cout << par.size() << endl;

    for (int i{}; i < par.size(); i++) {
        cout << par[i] << spc;
    }

    cout << endl << impar.size() << endl;

    for (int i{}; i < impar.size(); i++) {
        cout << impar[i] << spc;
    }
}