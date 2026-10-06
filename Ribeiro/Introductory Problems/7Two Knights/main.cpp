#include <bits/stdc++.h>
using namespace std;
 
long long n{}, total{}, ataque{}, result{};
 
int main() {
 
    cin >> n; 
    
    for (long long i = 1; i <= n; i++)
    {
        total = (i * i) * (i * i - 1) /2;

        ataque = 4 * (i - 1) * (i - 2);

        result = total - ataque;

        cout << result << "\n";
    }

}
