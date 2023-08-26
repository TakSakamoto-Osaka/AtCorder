#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> vec(M, vector<int> (N));    //  撮影データ
    vector<vector<int>> next(N, vector<int> (N,0));    //  隣どうしデータ

    //  撮影データ作成
    for( int i = 0; i < M; i++ ) {
        for ( int j = 0; j < N; j++ ) {
            cin >> vec[i][j];
        }
    }

    //  隣どうしデータ生成
    for ( int i = 0; i < M; i++ ) {
        for ( int j = 0; j < N; j++ ) {
            if ( j < N -1 ) {
                int val0 = vec[i][j] - 1;
                int val = vec[i][j+1] - 1;
                next[val0][val] = 1;

                //cout << val0 << " " << val << endl;
            }

            if ( j > 0 ) {
                int val0 = vec[i][j] - 1;
                int val = vec[i][j-1] - 1;
                next[val0][val] = 1;
                
                //cout << val0 << " " << val << endl;
            }
        }
    }

    int num = 0;

    for( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < N; j++ ) {
            if ( next[i][j] == 0 ) {
                num++;
            }
        }
    }

    cout << ( num - N ) / 2 << endl;
}
