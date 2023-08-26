#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    int winNum = 0;

    if ( N % 2 == 1 ) {
        winNum = N / 2 + 1;
    } else {
        winNum = N / 2;
    }

    int aWin = 0;
    int tWin = 0;

    for ( auto c : S ) {
        if ( c == 'A' ) {
            aWin++;

            if ( aWin >= winNum ) {
                cout << "A" << endl;
                return 0;
            }

        } else {
            tWin++;
            if ( tWin >= winNum ) {
                cout << "T" << endl;
                return 0;
            }
        }
    }
}
