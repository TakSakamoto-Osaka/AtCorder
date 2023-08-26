#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A { 3, 1, 4, 1, 5, 9 };
    vector<int> S(7, 0);

    for ( int i = 0; i < 6; i++ ) {
        S[i + 1] = S[i] + A[i]; 
    }

    char X, Y;
    int p, q;

    cin >> X >> Y;
    p = X - 'A';
    q = Y - 'A';
    
    cout << abs( S[p] - S[q] ) << endl;
}
