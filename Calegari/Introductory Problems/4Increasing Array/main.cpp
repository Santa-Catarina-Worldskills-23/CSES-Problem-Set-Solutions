#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long tamanhoArray{}, valor{}, diferenca{}, ultimoValor{}, mover{};


int main(){

    cin >> tamanhoArray;

    for(int i = 0; i < tamanhoArray; i++){
        cin >> valor;

        diferenca = ultimoValor - valor;

        if(diferenca > 0){
            valor += diferenca;
            mover += diferenca;
        }
        ultimoValor = valor;

    }

cout << mover << endl;

}