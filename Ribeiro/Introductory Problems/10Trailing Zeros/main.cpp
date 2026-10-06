#include <bits/stdc++.h>
using namespace std;
 
int n{}, result{};
 
int main() {
 
    cin >> n; 
    
    while (n >= 5) {
        n /= 5;
        result += n;
    }
    
    cout << result;
