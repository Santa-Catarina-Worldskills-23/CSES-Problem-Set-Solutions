#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

    int tFor;
    int i = 0;
    int j = 0;
    cin >> tFor;
    bool quebraIf = true;
    int z[tFor];

    for (int o = 0; o < tFor && quebraIf ; o++){

        cin >> i >> j;

        if(i > j){
            if(i % 2 == 0){
                z[o] = pow(i, 2) - (j - 1);
            }else{
                    i = i - 1;
                    z[o] = pow(i, 2) + (j + 1);   
                }
                quebraIf = false;
                break;
            }

            if(j > i){
                if(j % 2 == 0){
                        j = j - 1;
                        z[o] = pow(j, 2) + (i + 1);
                    }else{
                        z[o] = pow(j, 2) - (i - 1);
                    }
                    quebraIf = false;
                    break;  
            }
           if(i == j){
               if (i % 2 == 0)
               {
                   z[o] = pow(i, 2) - (j - 1) ;
               }
               else
               {
                   z[o] = pow(i, 2) - (j - 1);
               }
               quebraIf = false;
               break;
           }
         }

    

    for (int o = 0; o < tFor; o++)
    {
        cout << z[o] << endl;
    }

}
