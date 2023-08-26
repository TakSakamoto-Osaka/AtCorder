#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    
}

#if false
    //  頂点数と辺数
    int N, M;
    cin >> N >> M;

    //  頂点数 N のグラフを定義
    vector<vector<int>> G(N);

    //  M 本の辺を受け取る
    for ( int i = 0; i < M; i++ ) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
#endif