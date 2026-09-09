#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    int tFor;
    int i = 0;
    int j = 0;
    cin >> tFor;
    
    int z[tFor];

    for (int o = 0; o < tFor; o++){

        cin >> i >> j;

        if(i > j){
                if(i % 2 == 0){
                    z[o] = pow(i, 2) - (j - 1);
                }else{
                    i = i - 1;
                    cout << i;
                    z[o] = pow(i, 2) + (j + 1);   
                }
            }
        
        if (i == j) {

            if (i % 2 == 0)
            {
                z[o] = pow(i, 2) - (j - 1) ;
            }
            else
            {
                z[o] = pow(i, 2) - (j - 1);
            }
        }
    }
    for (int o = 0; o < tFor; o++)
    {
        cout << z[o] << endl;
    }
}