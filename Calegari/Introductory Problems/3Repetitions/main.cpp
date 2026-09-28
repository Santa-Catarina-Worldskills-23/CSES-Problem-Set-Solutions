#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

  string texto{}; 
  char ultimaString;
  long long sequencia{}
  ultimaSequencia{};
 
int main(){

    cin >> texto;

  for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == ultimaString) {
            sequencia++;
        } else {
            sequencia = 1;
        }

        if (sequencia > ultimaSequencia) {
            ultimaSequencia = sequencia;
        }

        ultimaString = texto[i];
    }
    cout << ultimaSequencia << endl;
}