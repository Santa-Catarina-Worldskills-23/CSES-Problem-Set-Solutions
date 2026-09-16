#include <bits/stdc++.h>
using namespace std;

string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", value{};
vector<int> quantidade(26,0);
int impar{}, quantidadeTotal{};
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

        for (int i{}; i<value.size() && quantidadeTotal > 0; i++) {
            if (value[i] != value[value.size() - 1 - i]) {
                while (quantidade[i] > 0){
                    if (quantidade[i] == 1) {
                        value[value.size()/2] = alfabeto[i];
                        quantidade[i]--;
                        quantidadeTotal--;
                        unico = true;
                    }

                    for (int n{}; n<value.size() && quantidade[i] > 0 && !unico; n++) {
                        value[i + n] = alfabeto[i];
                        value[value.size() - 1 - i + n] = alfabeto[i];

                        quantidade[i] -= 2;
                        quantidadeTotal -= 2;
                    }

                    unico = false;
                } 
            } else {
                quantidade[i] -= 2;
                quantidadeTotal -= 2;
            }
        }
        cout << value;
    } else {
        cout << "NO SOLUTION";
    }
} 