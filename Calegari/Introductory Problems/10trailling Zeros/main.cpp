#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

long long zeros = 0;
long long n = 0;

    cin >> n;

    while (n >= 5) {
        zeros += n / 5;
        n /= 5;
    }
    cout << zeros << "\n";

}


   /* long long inteiro = 0;
    long long contadora = 0;   
    cin >> inteiro;
    long long vetor[inteiro];
    long long contadora0 = 0;
    long long multiplica5 = 0;
    long n = 2;
    long o = 1;
    long p = 1;
    for(int i = 1; i < (inteiro + 1); i++){
    vetor[i] = i;
    }

   for (int i = 1; i < inteiro; i++){
       multiplica5 = 5 * o;	
    if(vetor[i] % 5 == 1){		
        if (vetor[i] / multiplica5 == 1){
        contadora0 += n;
        o +=2;
        if(o > p){
            o = 5;
            o = pow(o, p);
            p+=1;
            cout << multiplica5 << endl;
        }
        n +=1;
        }   else{
                contadora0 += 1;
        }
    }
   }        
    cout << contadora0; 
   }
    */

