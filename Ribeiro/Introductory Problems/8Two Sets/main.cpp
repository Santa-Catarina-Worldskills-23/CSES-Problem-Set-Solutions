#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl "\n"
#define spc " "

vector<int> impar, par;
int n{}, diff{}, sumPar{}, sumImpar{}, sumTotal{};

int main(){
    
    cin >> n;

    for (int i{}; i <= n ; i++) {
        if (i != 0){
            if (i % 2 == 0) {
                par.push_back(i);
                sumPar += i;
            } else {
                impar.push_back(i);
                sumImpar += i;
            }
        }
        sumTotal += i;
    }

    vector<int> troca(par.size());

    if (sumTotal % 2 != 0) {
        cout << endl << "NO" << endl;
    } else {
        cout << endl << "YES" << endl;

        diff = abs(sumImpar - sumPar);

        for (int m = 1; diff != 0; m++) {

            for (int i = 1; i < diff/2 + 1; i++) {
                troca[troca.size() - i] = par[par.size() - i];
                par[par.size() - i] = impar[impar.size() - i];
                impar[impar.size() - i] = troca[troca.size() - i];
            }

            sumImpar = 0;
            sumPar = 0;

            for (size_t i{}; i < par.size(); i++){
                sumPar += par[i];
            }

            for (size_t i{}; i < impar.size(); i++){
                sumImpar += impar[i];
            }

            diff = abs(sumImpar - sumPar);
        }
            
        cout << par.size() << endl;

        for (size_t i{}; i < par.size(); i++) {
            cout << par[i] << spc;
        }

        cout << endl << impar.size() << endl;

        for (int i{}; i < impar.size(); i++) {
            cout << impar[i] << spc;
        }
    }
        

}