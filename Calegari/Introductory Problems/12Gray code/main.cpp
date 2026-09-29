#include <bits/stdc++.h>
using namespace std;
#define endl "\n"




int main(){

int n = 0;
int v = 2;
cin >> n;

for( int i = 1; i < n; i++){
    v = v*2;
}

vector<bitset<5>> vetor[v];



for (int i = 1; i <= v; i++ ){
    vetor[i] = i;




    cout << bitset<4>(i) << endl;
    
}






}

