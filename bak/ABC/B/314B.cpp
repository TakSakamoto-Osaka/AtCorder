#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int N;
    cin >> N;

    vector<vector<int>> vec(37, vector<int>(N+1,0));

    for ( int i = 1; i <= N; i++ ) {
        int c;
        cin >> c;
        for ( int j = 0; j < c; j++ ) {
            int a;
            cin >> a;
            
            vec[a][i] = c;
        } 
    }

    int X;
    cin >> X;

    vector<int> v1 = vec[X];

    int min = 100;

    for ( auto v:v1 ) {
        if ( v > 0 ) {
            if ( v < min ) {
                min = v;
            }
        }
    }

    if ( min == 100 ) {
        cout << "0" << endl;
        return 0;
    }

    string strOut = "";
    int cnt = 0;
    int num = 0;

    for ( auto v:v1 ) {
        if ( v == min ) {
            strOut += to_string(cnt) + " ";
            num++;
        }

        cnt++;
    }

    cout << num << endl;
    cout << strOut.erase(strOut.size()-1,1) << endl;
}
