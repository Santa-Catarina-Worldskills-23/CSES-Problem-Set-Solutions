#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long n{}, m{}, t{};
vector<bool> yes;

int main() {

    cin >> t;

    for (int i{}; i<t; i++) { 

        cin >> n >> m;

        if (n >= m && m*2 >= n && (n + m) % 3 == 0) {
            yes.push_back(true);
        } else if (m > n && n*2 >= m && (n + m) % 3 == 0){
            yes.push_back(true);
        } else {
            yes.push_back(false);
        }
    }
    
    for (int i{}; i<t; i++){
        
        if (yes[i]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}