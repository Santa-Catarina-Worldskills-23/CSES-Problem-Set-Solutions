#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define spc " "

int value{}, movA{}, movB{}, n{}, lastPos{}, aux;
vector<int> A,B,C;

void setMovs(int x, int y) {
    movA = x;
    movB = y;
}

void trocar(vector<int>& X, vector<int>& Y) {
    if (!X.empty()) {
        aux = X.back();
        X.pop_back();
        Y.push_back(aux);
    }
}

void top() {
    if (value % 2 == 0) {
        switch(n % 3) {   
            case 0:
                setMovs(1,2);
                trocar(A, B);
                break;
            case 1:
                setMovs(2,3);
                trocar(B, C);
                break;
            case 2:
                setMovs(3,1);
                trocar(C, A);
                break;
            }
    } else {
        switch(n % 3) {   
            case 0:
                setMovs(1,3);
                trocar(A, C);
                break;
            case 1:
                setMovs(3,2);
                trocar(C,B);
                break;
            case 2:
                setMovs(2,1);
                trocar(B, A);
                break;
        }
    }   
    n++;
}

int main() {
    
    A.push_back(999);
    B.push_back(999);
    C.push_back(999);

    cin >> value;

    cout << ((1 << value) - 1) << endl;

    for(int i = value; i>0; i--){
        A.push_back(i);
    }

    for (int i{}; i<(1 << value) - 1; i++) {

        if (i % 2 == 0) {

            top();
            cout << movA << spc << movB << endl;

        } else {

            lastPos = movB;

            switch (lastPos) {

                case 1:
                    if (B.back() > C.back()) {
                        trocar(C, B);
                        setMovs(3, 2);
                    } else {
                        trocar(B, C);
                        setMovs(2, 3);
                    }
                    break;

                case 2:
                    if (A.back() > C.back()) {
                        trocar(C, A);
                        setMovs(3, 1);
                    } else {
                        trocar(A, C);
                        setMovs(1, 3);
                    }
                    break;
                
                case 3:
                    if (A.back() > B.back()) {
                        trocar(B, A);
                        setMovs(2, 1);
                    } else {
                        trocar(A, B);
                        setMovs(1, 2);
                    }
                    break;
            }
            cout << movA << spc << movB << endl;
        }
    }
}
