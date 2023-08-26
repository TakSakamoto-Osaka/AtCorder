#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int N;
    cin >> N;

    vector<int> vec(N);
    for ( int i = 0; i < N; i++ ) {
        cin >> vec[i];
    }

    int max = *max_element(vec.begin() + 1 , vec.end());

    if ( vec[0] > max ) {
        cout << 0 << endl;
    } else {
        cout << max + 1 - vec[0] << endl;
    }
}
