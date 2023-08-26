
#include <bits/stdc++.h>
using namespace std;

int main() {
    //   頂点数、辺数、クエリ数
    int N, M, Q;
    cin >> N >> M >> Q;

    //   頂点数 N のグラフ G を定義
    vector<vector<int>> G(N);

    //   M 本の辺を順に受け取る
    for ( int i = 0; i < M; i++ ) {
        int u, v;
        cin >> u >> v;

        //  頂点番号を 0 始まりにする
        u--; v--;

        //  グラフに辺を追加
        G[u].push_back(v);
        G[v].push_back(u);
   } 

    //  初期状態の各頂点の色
    vector<int> col(N);
    for ( auto& coli : col) {
        cin >> coli;
    }

    //  各クエリに答える
    for ( int i = 0; i < Q; i++ ) {
        int t, x;
        cin >> t >> x;

        //  頂点番号を 0 始まりにする
        x--;

        //  頂点 x の色を出力
        cout << col[x] << endl;

        //  タイプ1 の場合
        if ( t == 1 ) {
            //  頂点 x に隣接する各頂点 v の色を更新
            for ( auto v : G[x] ) {
                col[v] = col[x];
            }
        } else {
            int y;
            cin >> y;

            //  頂点 x の色を y に更新
            col[x] = y;
         }
    }
}
