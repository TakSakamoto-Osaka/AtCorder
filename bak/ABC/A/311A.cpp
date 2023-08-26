#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;

    cin >> N >> S;

    int a = 0;
    int b = 0;
    int c = 0;

    for ( int i = 0; i < N; i++ ) {
        char ch = S.at(i);

        if ( ch == 'A' ) {
            a++;
        } else if ( ch == 'B' ) {
            b++;
        } else {
            c++;
        }

        if ( a > 0 && b > 0 && c > 0 ) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
