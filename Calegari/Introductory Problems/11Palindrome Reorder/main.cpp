#include <bits/stdc++.h>
using namespace std;
#define endl "\n"




int main()
{

    vector<int> frequencia(26, 0);
    long long ultimaFreq = 0;

    string texto{};
    cin >> texto;
    char letra{};
    string vetorFinal = 0;

  for (int i = 0; i < texto.size(); i++) {
        if()
            char letra = texto[i];
            frequencia[letra - 'A']++;
  } 
        string metade = "";
        for (int i = 0; i < 26; i++) {
        char letra = 'A' + i;
        for (int j = 0; j < frequencia[i] / 2; j++) {
            metade += letra;
        }
    }  
}

    vector<int> freq(26, 0);
    for (char c : texto) {
        freq[c - 'A']++;
    }
    // 1. Descobre se há caracteres ímpares
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            impares++;
            letraImpar = 'A' + i;
        }
    }

    // Caso haja mais de 1 ímpar, é impossível montar o palíndromo
    if (impares > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    // 2. Monta a primeira metade (pega a metade da quantidade de cada letra)
    string metade = "";
    for (int i = 0; i < 26; i++) {
        char letra = 'A' + i;
        for (int j = 0; j < freq[i] / 2; j++) {
            metade += letra;
        }
    }

    // 3. Imprime a Metade Esquerda
    cout << metade;

    // 4. Imprime o elemento ímpar no meio (se existir)
    if (impares == 1) {
        cout << letraImpar;
    }

    // 5. Imprime a Metade Direita (invertida)
    for (int i = metade.size() - 1; i >= 0; i--) {
        cout << metade[i];
    }
    cout << "\n";

    return 0;
}