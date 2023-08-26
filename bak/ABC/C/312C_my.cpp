#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for ( int i = 0; i < N; i++ ) {
        cin >> A[i];
    }

    for ( int i = 0; i < M; i++ ) {
        cin >> B[i];
    }
    //cout << endl;
    //cout << endl;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for ( auto x : A ) {
        auto it_a = find( A.rbegin(), A.rend(), x ); 

        auto it_b = find_if( B.begin(), B.end(), [&x]( int i ) { 
            return x <= i;
            } );

        int idx_a = distance( it_a, A.rend() ) - 1;
        int idx_b = 0;

        if ( it_b == B.end() ) {
            continue;
        } else {
            idx_b = distance( B.begin(), it_b );
        }

        //cout << idx_a << " " << idx_b << endl;

        int num_a = idx_a + 1;
        int num_b = B.size() - idx_b;

        if ( num_a >= num_b ) {
            cout << x << endl;
            return 0;
        }
    }

    cout << B[M -1] + 1 << endl;
}
