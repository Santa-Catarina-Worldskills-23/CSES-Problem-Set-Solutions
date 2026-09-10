#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    long long tFor;
    long long i = 0;
    long long j = 0;
    cin >> tFor;
    long long z[tFor];
    long long vConta;

    for (long o = 0; o < tFor; o++)
    {
        cin >> i >> j;

        if (i > j)
        {
            if (i % 2 == 0)
            {
                z[o] = (i * i) - (j - 1);
            }
            else
            {
                vConta = 0;
                vConta = i - 1;
                z[o] = (vConta * vConta) + (j);
            }
        }

        if (j > i)
        {
            if (j % 2 == 0)
            {
                vConta = 0;
                vConta = j - 1;
                z[o] = (vConta * vConta) + (i);
            }
            else
            {
                z[o] = (j * j) - (i - 1);
            }
        }
        if (i == j)
        {
            if (i % 2 == 0)
            {
                z[o] = (i * i) - (j - 1);
            }
            else
            {
                z[o] = (i * i) - (j - 1);
            }
        }
    }

    for (long o = 0; o < tFor; o++)
    {
        cout << z[o] << endl;
    }
}
