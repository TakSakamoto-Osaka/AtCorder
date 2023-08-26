#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N+M);

    for ( int i = 0; i < N; i++ ) {
        cin >> A[i];
    }

    for ( int i = 0; i < M; i++ ) {
        int val;
        cin >> val;
        A[i+N] = val + 1;
    }

    sort(A.begin(),A.end());

    cout << A[M-1] << endl;
}
