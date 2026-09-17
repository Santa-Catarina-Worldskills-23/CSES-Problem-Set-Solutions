#include <bits/stdc++.h>
using namespace std;

string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", value{};
vector<int> quantidade(26,0);
int impar{}, quantidadeTotal{}, n{};
bool unico{};

int main() {

    cin >> value; 

    for (int i{}; i<alfabeto.size(); i++) {
        for (int n{}; n<value.size(); n++) {
            if (alfabeto[i] == value[n]) {
                quantidade[i]++;
                quantidadeTotal++;
            }
        }
    }

    for (int i{}; i<alfabeto.size() && impar < 2; i++) {
        if (quantidade[i] % 2 == 1) {
            impar++;
        }
    }

    if ((impar == 1 && value.size() % 2 == 1) || impar < 2) {

        for (int i{}; i < alfabeto.size(); i++) {
                
            while (quantidade[i] > 0) {

                if (n == value.size() - 1 - n) {
                    value[n] = alfabeto[i];
                    quantidade[i] -= 1;
                    n++;
                } else {
                    value[n] = alfabeto[i];
                    value[value.size() - 1 - n] = alfabeto[i];
                    quantidade[i] -= 2;
                    n++;
                }
            }
        }
        
        cout << value;
    } else {
        cout << "NO SOLUTION";
    }
}