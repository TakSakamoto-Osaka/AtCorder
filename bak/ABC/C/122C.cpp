#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

struct data_t {
    int a;
    int b;
};

int main() {
    //  頂点数と辺数
    int N, Q;
    cin >> N >> Q;

    string S;

    //  文字列取得
    cin >> S;

    //  クエリー
    vector<data_t> query(Q+1);

    for ( int i = 1; i <= Q; i++ ) {
        cin >> query[i].a;
        cin >> query[i].b;
    }

    //  累積和
    vector<int> G(N+1,0);

    //  累積和算出
    int sum = 0;
    
    for ( int i = 0; i < N; i++ ) {
        string s = S.substr( i, 2 );

        if ( s == "AC" ) {
            sum++;
        }
        G[i+1] = sum;
    }

    //cout << endl;
    //cout << endl;

    //for ( int i = 0; i <= N; i++ ) {
    //    cout << i << " : " << G[i] << endl;
    //} cout << endl;

    for ( int i = 1; i <= Q; i++ ) {
        data_t q = query[i];

        //cout << q.a << " " << q.b << endl;

        int num = G[ q.b - 1 ] - G[ q.a - 1];
        //cout << G[q.b - 1] << " " << G[q.a - 1] << endl;
        cout << num << endl;

        //cout << endl;
    }
}
