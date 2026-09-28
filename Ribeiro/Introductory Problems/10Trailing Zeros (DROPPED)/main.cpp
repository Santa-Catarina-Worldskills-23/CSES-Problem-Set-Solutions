//OBS: ESSE PROBLEMA FOI DESISTIDO, PORTANTO ESSE CÓDIGO É PRONTO DA INTERNET

#include <iostream>
using namespace std;

// Recursive function to calculate the multiples of 5 till N
int solve(int N)
{
    if (N == 0) {
        return 0;
    }
    return N / 5 + solve(N / 5);
}

int main()
{
    int N = 20;
    cout << solve(N) << "\n";
    return 0;
}