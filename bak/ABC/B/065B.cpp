#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() {
    int N;
    cin >> N;

    vector<int> vec(N+1,0);
    vector<int> use(N+1,0);

    for ( int i = 1; i <= N; i++ ) {
        cin >> vec[i];
    }

    int idx = 1;
    use[1] = 1;

    for ( int i = 1; i <= N; i++ ) {
        idx = vec[idx];

        if ( idx == 2 ) {
            cout << i << endl;
            return 0;
        } else if ( use[idx] == 1 ) { 
            cout << -1 << endl;
            return 0;
        } else {
            use[idx] = 1;
        }
    }
}
