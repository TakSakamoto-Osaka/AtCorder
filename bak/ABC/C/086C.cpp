#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

struct data_t {
    int t;
    int x;
    int y;
};

int main() {
    int N;
    cin >> N;

    vector<data_t> vec(N);

    for ( int i = 0; i < N; i++ ) {
        cin >> vec[i].t >> vec[i].x >> vec[i].y;
    }

    int x = 0, y = 0, t = 0;        //  前の値

    for ( int i = 0; i < N; i++ ) {
        int xi = abs(vec[i].x - x);
        int yi = abs(vec[i].y - y);
        int ti = abs(vec[i].t - t);  

       int T = xi + yi;

       if ( T > ti  ) {
            //cout << "No1" << " " << i << " " << ti << " " << T << endl;
            cout << "No" << endl;
            return 0;
       } 

        if ( ti % 2 != T % 2) {
            //cout << "No2" << " " << i << endl;
            cout << "No" << endl;
            return 0;
        }

        x = vec[i].x;
        y = vec[i].y;
        t = vec[i].t;

    }

    cout << "Yes" << endl;

}
