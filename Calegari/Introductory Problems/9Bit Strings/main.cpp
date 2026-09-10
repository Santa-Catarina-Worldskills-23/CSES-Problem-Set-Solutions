#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    long long inteiro = 0;
    long long resultado = 2;
    long long mod = 1000000007;

    cin >> inteiro;

    
        for (int i = 1; i < inteiro; i++)
        {
            resultado = (resultado * 2);
            resultado = resultado % mod;
        }
    cout << resultado;
}
