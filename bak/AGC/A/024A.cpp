#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() {
    long long A, B, C, K;

    cin >> A >> B >> C >> K;

    if ( K % 2 == 1 ) {
        cout << B - A << endl;
    } else {
        cout << A - B << endl;
    }
}
