#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

long valor = 0;
long long vezesTotal;
long long vezesAtaque;
long long vezesGeral;


cin >> valor;

    for (int i = 1; i <= valor; i++){

        long long tamanho = (i*i);
        
        vezesGeral = ((tamanho - 1) * tamanho) / 2;

        vezesAtaque = 2 * (2 * (i - 2) * (i - 1));

        vezesTotal = vezesGeral - vezesAtaque;

        cout << vezesTotal << endl;

    }





}
