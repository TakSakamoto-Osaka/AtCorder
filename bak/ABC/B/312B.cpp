#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> vec(N);

    for ( int i = 0; i < N; i++ ) {
        cin >> vec[i];
    }

    for ( int i = 0; i < N - 9 + 1; i++ ) {
        for ( int j = 0; j < M  - 9 + 1; j++ ) {
            //  ###. と一致判定
            if ( vec[i].substr(j, 4) != "###." ) {
                continue;
            }

            if ( vec[i + 1].substr(j, 4) != "###." ) {
                continue;
            }

            if ( vec[i + 2].substr(j, 4) != "###." ) {
                continue;
            }

            if ( vec[i + 3].substr(j, 4) != "...." ) {
                continue;
            }

            if ( vec[i + 5].substr(j + 5, 4) != "...." ) {
                continue;
            }

            if ( vec[i + 6].substr(j + 5, 4) != ".###" ) {
                continue;
            }

            if ( vec[i + 7].substr(j + 5, 4) != ".###" ) {
                continue;
            }

            if ( vec[i + 8].substr(j + 5, 4) != ".###" ) {
                continue;
            }

            cout << i + 1 << " " << j + 1 << endl;
        }
    }    
}
