#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    int inteiro = 0;

    cin >> inteiro;

        int tImpar = ceil((float)inteiro / 2);
        int tPar = floor((float)inteiro / 2);
        int vetorImpar[tImpar];
        int vetorPar[tPar];
        int Impar = 1;
        int Par = 2;
        int o = 0;
        int u = 0;
        int soma = 0;
        int totalI = 0;
        int totalP = 0;
        int apoio = 0;
        bool valido = true;

        

         for (int i = 1; i <= inteiro; i++) {
        soma += i;
    }

        for (int i = 0; i < tImpar; i++)
        {
            vetorImpar[i] = Impar;
            totalI += Impar;
            Impar += 2;
             u += 1;
        }
        for (int i = 0; i < tPar; i++)
        {
            vetorPar[i] = Par;
            totalP += Par;
            Par += 2;
             o += 1;
        }

        if(soma % 2 == 0){
            cout << "YES" << endl;
            if(inteiro % 2 == 0){
                int diferenca = 0;
                diferenca = totalP - totalI;
                diferenca = diferenca / 2;
                for(int i = 0; i < diferenca; i++){
                    apoio = vetorPar[i];
                    vetorPar[i] = vetorImpar[i];
                    vetorImpar[i] = apoio;
                }
            }else{
                    int diferenca = 0;
                    diferenca = totalI - totalP;
                    diferenca = diferenca / 2;
                    for(int i = (u - 1); i > (diferenca - 1); i--){
                        int apoio = 0;
                        apoio = vetorPar[i-1];
                        vetorPar[i-1] = vetorImpar[i];
                        vetorImpar[i] = apoio;
            } 
        }}else{
            cout << "NO";
            valido = false;
        }


        if (o == u)
        {
            if(valido & true){
            cout << o << endl;
            for (int i = 0; i < tPar; i++)
            {
                cout << vetorPar[i] << " ";
            }
            cout << endl;
            cout << u << endl;
            for (int i = 0; i < tImpar; i++)
            {
                cout << vetorImpar[i] << " ";
            }
        }
    }
        if (u > o){
            if(valido & true){
        cout << endl;
        cout << u << endl;
        for (int i = 0; i < tImpar; i++)
        {
            cout << vetorImpar[i] << " ";
        }
        cout << endl;
        cout << o << endl;
        for (int i = 0; i < tPar; i++)
        {
            cout << vetorPar[i] << " ";
        }
        cout << endl;
    }
}
}
