#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);

    rep(i,n) cin >> A[i];
    rep(i,m) cin >> B[i];

    int wa = 0, ac = 1e9+1;

    while(wa+1 < ac) {
        int wj = (wa+ac)/2;
        int na=0, nb=0;

        rep(i,n) if ( A[i] <= wj ) na++; 
        rep(i,m) if ( B[i] >= wj ) nb++; 

        if ( na >= nb ) ac = wj;
        else wa = wj;
    }

    cout << ac << endl;
}
