#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    int valVetor = 0;

    cin >> valVetor;

    if (valVetor > 3)
    {

        int tImpar = ceil((float)valVetor / 2);
        int tPar = floor((float)valVetor / 2);
        int vetorImpar[tImpar];
        int vetorPar[tPar];
        int Impar = 1;
        int Par = 2;

        for (int i = 0; i < tImpar; i++)
        {
            vetorImpar[i] = Impar;
            Impar += 2;
        }
        for (int i = 0; i < tPar; i++)
        {
            vetorPar[i] = Par;
            Par += 2;
        }
        for (int i = 0; i < tPar; i++)
        {
            cout << vetorPar[i] << " ";
        }
        for (int i = 0; i < tImpar; i++)
        {
            cout << vetorImpar[i] << " ";
        }
    }
    else if (valVetor == 1)
    {
        cout << valVetor;
    }
    else
    {
        cout << "NO SOLUTION";
    }
}