#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int N, H, X;

    cin >> N >> H >> X;
    
    //vector<int> P(N+1,0);

    int hp = X - H;

    for ( int i = 0; i <N; i++ ) {
        int val;
        cin >> val;

        if ( val >= hp ) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
