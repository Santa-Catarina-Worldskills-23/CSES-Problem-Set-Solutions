#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long tFor, i = 0, j = 0, vConta;

int main() {

    cin >> tFor;
    long long z[tFor];

<<<<<<< HEAD
    for (long o = 0; o < tFor; o++)
    {
=======
    for (long o = 0; o < tFor; o++){
>>>>>>> e126029bd2231aa09f934aa5a6eab7e11f444f46
        cin >> i >> j;

        if (i > j)
        {
            if (i % 2 == 0)
            {
                z[o] = (i * i) - (j - 1);
<<<<<<< HEAD
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
=======
            } else {
            vConta = 0;
            vConta = i - 1;
            z[o] = (vConta * vConta) + (j);
            }      
        }

        if(j > i){
            if(j % 2 == 0){
                    vConta = 0;
                    vConta = j - 1;
                    z[o] = (vConta * vConta) + (i);
                } else {
                    z[o] = (j*j) - (i - 1);
                } 
            }

        if(i == j){
            if (i % 2 == 0) {
                z[o] = (i*i) - (j - 1) ;
            } else {
                z[o] = (i*i) - (j - 1);
            } 
        }
    }

    for (long o = 0; o < tFor; o++) {
>>>>>>> e126029bd2231aa09f934aa5a6eab7e11f444f46
        cout << z[o] << endl;
    }
}
