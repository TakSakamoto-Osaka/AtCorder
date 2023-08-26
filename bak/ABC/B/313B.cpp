#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int N, M;
    cin >> N >> M;

    //  頂点数 N のグラフを定義
    //vector<vector<int>> G(N,0);
    vector<vector<int>> g(N);

    //  M 本の辺を受け取る
    for ( int i = 0; i < M; i++ ) {
        int u, v;
        cin >> u >> v;
        //G[u].push_back(v);      //  自分よりも弱い相手
        g[v-1].push_back(u-1);      //  自分よりも強い相手
    }

    //  自分より弱い相手が1人未満の場合、最強がわかる
    int num = 0;
    int strong = -1;

    for ( int i = 0; i < N; i++ ) {
        if ( g[i].empty() == true ) {
            //cout << "empty " << i << " " << endl;
            num++;
            strong = i + 1;
        }
    }    

    if ( num == 1 ) {
        cout << strong << endl;
    } else {
        cout << -1 << endl;
    }
}
