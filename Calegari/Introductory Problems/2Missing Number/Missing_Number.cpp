#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


int main(){

    long long valor = 0, somaVerdadeira = 0, somaEsperada = 0, valorVetor = 0;

    vector<int> v;
    cin >> valor; valor -= 1;

    for (int i = 0; i < valor; i++){
        cin >> valorVetor;
        v.push_back(valorVetor); 
    }
    for (int i=0; i<valor; i++){
        somaVerdadeira += v[i];
    }

    valor += 1;


    for(int i=0; i<valor; i++) {
    somaEsperada += i+1;
}

    cout << somaEsperada - somaVerdadeira;

}