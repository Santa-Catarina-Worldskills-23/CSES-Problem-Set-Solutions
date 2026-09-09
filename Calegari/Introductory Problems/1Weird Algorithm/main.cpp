#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    
    long long c;
    cin >> c;


    while (c != 1){
        cout << c << " ";
        if (c % 2 == 0){
            c = c / 2;
        }
        else {
            c = c * 3 + 1;
        }
    }
        cout << c << " ";
    




    // int v[10];
    
    // for(int i = 0 ; i < 10; i++){
    //     cin >> v[i];
    // }   

    // for(int i = 9; i >= 0; i--){
    //     cout << v[i] << endl;
    // }


    // for(int i = 0; i <=  1000; i++){

    //     cout << i;
    //     cout << "\n" ; 
    // }

    
}