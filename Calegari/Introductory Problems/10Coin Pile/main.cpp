#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    long long valor = 0;
    long long x = 0;
    long long y = 0;
    long long i = 0;
    bool fator = true;
    long long o = 0;
    cin >> valor;
    
    long long resultado[valor];

    for (long long i = 0; i < valor; i++)
    {
        fator = true;
        cin >> x >> y;
        
        if (x == 2)
        {
            if (fator == true)
            {
                if (y == 1)
                {

                    resultado[o] = 1;
                    o +=1;
                    fator = false;
                }
            }
        }
        if (y > x)
        {
            if (fator == true)
            {
                resultado[o] = 2;
                o +=1;
                fator = false;
            }
        }
        if (x > y)
        {
            if (fator == true)
            {
                resultado[o] = 2;
                o +=1;
                fator = false;
            }
        }
        if (x == y)
        {
            if (fator == true)
            {
                if (x % 3 == 0)
                {
                    if (y % 3 == 0)
                    {
                        resultado[o] = 1;
                        o +=1;
                        fator = false;
                    }
                }
            }
        }
    }
    for (long long o = 0; o < valor; o++)
    {
        if (resultado[o] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}