#include <bits/stdc++.h>
using namespace std;

string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", value{};
vector<int> quantidade(26,0);
int impar{};

int main() {

    cin >> value;

    for (int i{}; i<alfabeto.size(); i++) {
        for (int n{}; n<value.size(); n++) {
            if (alfabeto[i] == value[n]) {
                quantidade[i]++;
            }
        }
    }

    for (int i{}; i<alfabeto.size() && impar < 2; i++) {
        if (quantidade[i] % 2 == 1) {
            impar++;
        }
    }

    if ((impar == 1 && value.size() % 2 == 1) || impar >= 2) {
        cout << "NO SOLUTION";
    } else {
        for (int i{}; i<alfabeto.size(); i++) {
            cout << quantidade[i] << " " << alfabeto[i] << "\n";
        }
    }


}