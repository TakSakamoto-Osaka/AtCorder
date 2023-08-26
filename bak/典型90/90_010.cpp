#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() {
    int N;
    cin >> N;

    vector<vector<int>> vec(3, vector<int>(N+1,0));

    int sum_1 = 0;
    int sum_2 = 0;

    for ( int i = 1; i <=N; i++ ) {
        int c, p;

        cin >> c >> p;

        if ( c == 1 ) {
            sum_1 += p;
        } else {
            sum_2 += p;
        }

        vec[1][i] = sum_1;
        vec[2][i] = sum_2;
    }

    int Q;
    cin >> Q;
    vector<pair<int,int>> query(Q);

    for ( int i = 0; i < Q; i++ ) {
       int l,r;
       cin >> l >> r;

       query[i] = pair(l,r); 
    }


    for ( auto q: query ) {
        int sum1 = vec[1][q.second] - vec[1][q.first - 1];     
        int sum2 = vec[2][q.second] - vec[2][q.first - 1];    

        cout << sum1 << " " << sum2 << endl;
    }
}
