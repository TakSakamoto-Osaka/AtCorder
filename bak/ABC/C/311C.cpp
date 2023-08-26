#include <bits/stdc++.h>
using namespace std;

int main() {
    //  頂点数と辺数
    int N;
    cin >> N;
    vector<int> a(N+1);

    for ( int i = 1; i <= N; i++ ) {
        cin >> a[i];
    }

    vector<int> fl(N+1, 0), s;
    int v=1;

    while(fl[v] == 0) {
        fl[v] = 1;
        s.push_back(v);
        v = a[v];
    }

    vector<int> res;
    for ( auto &nx : s ) {
        if ( nx == v ) {
            v = -1;
        }

        if ( v == -1 ) {
            res.push_back(nx);
        }
    }

    cout << res.size() << endl;

    for ( int i = 0; i < res.size(); i++ ) {
        if (i) {
            cout << " ";
        }
        cout << res[i];
    }

    cout << endl;
}
