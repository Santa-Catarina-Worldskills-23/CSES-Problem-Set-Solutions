#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


int main(){

    int multiplo = 16;
    int potencia = 0;
     vector<int> vetor;
    int n = 0;
    int v = 1;

    cin >> n;

    for( int i = 0; i < n; i++){
    v = v*2;
}

    for (int i = 1; i < v + 1; i++){

        int multiplo = 16;
        vetor.clear();
        int aux = i;
        for (int j = 0; j < 16; j ++){
            potencia = pow(2, multiplo);
            if ( aux - potencia >= 0){
                vetor.push_back(1);
                aux = aux - potencia;
            }else{
                vetor.push_back(0);
            }
            multiplo -= 1;
    }
        for (int k = 0; k < vetor.size(); k++) {
        cout << vetor[k];

            }
            cout << endl;
    }
}
