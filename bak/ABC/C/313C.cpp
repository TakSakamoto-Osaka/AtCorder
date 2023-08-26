#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int N;
    cin >> N;
    vector<long long> vec(N);

    for ( int i = 0; i < N; i++ ) {
        cin >> vec[i];
    }

    //  平均値算出
    long long ave = accumulate(vec.begin(), vec.end(), 0) / vec.size();

    //  ソート
    sort(vec.begin(), vec.end());

    //  平均よりも大きい最後の要素を探す
    auto it = find_if( vec.rbegin(), vec.rend(),
                    [&ave](const auto& x ) { return x <= ave; } );

    long long idx= distance( it, vec.rend() ) - 1;
    
    //cout << idx << endl;

    long long u_val = 0;
    long long l_val = 0;

    if ( N / 2 > idx + 1 ) {
       u_val = ave + 1;
       l_val = ave; 
    } else {
        //u_val = ave;
        //l_val = ave - 1;
        //if ( l_val < 0 ) {
        //    l_val = 0;
        //}
       u_val = ave + 1;
       l_val = ave; 
    }

    long long sum = 0;

    for ( int i = 0; i < N; i++ ) {
        if ( vec[i] >= u_val ){
            long long err = abs( vec[i] - u_val );
            sum += err;
        } else {
            long long err = abs( l_val - vec[i]);
            sum += err;
        }
    }

    //cout << sum << endl;

    if ( sum % 2 == 1 ) {
        cout << sum / 2 + 1 << endl;
    } else {
        cout << sum / 2 << endl;
    }
}
