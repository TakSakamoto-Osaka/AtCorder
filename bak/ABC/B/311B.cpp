#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;

    cin >> N >> D;

    vector<string> v(N);

    for ( int i = 0; i < N; i++ ) {
        cin >> v.at(i);
    }

    int max = 0;
    int num = 0;

    for ( int i = 0; i < D; i++ ) {
        bool busy = false;

        for ( int j = 0; j < N; j++ ) {
            if ( v.at(j).at(i) == 'x' ) {
                busy = true;
                break;
            }
        }

        if ( busy == false ) {
            num++;
        } else {
            num = 0;
        }

        if ( num > max ) {
            max = num;
        }
    } 

    cout << max << endl;
}
