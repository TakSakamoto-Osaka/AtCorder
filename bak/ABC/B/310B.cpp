#include <bits/stdc++.h>
using namespace std;

struct data_t {
    int P;
    int C;
    vector<int> vec;
};

bool asc( const data_t& left, data_t& right ) {
    return ( left.P < right.P );
}


int main()
{
    int N, M;

    cin >> N >> M;
    
    vector<data_t> data(N);

    for ( int i = 0; i < N; i++ ) {
        cin >> data.at(i).P >> data.at(i).C;

        for ( int j = 0; j < data.at(i).C; j++ ) {
            int tmp;
            cin >> tmp;
            data.at(i).vec.push_back( tmp );
            sort( data.at(i).vec.begin(), data.at(i).vec.end() );
        }
    }

    sort( data.begin(), data.end(), asc );

#if false
    cout << endl << endl;

    for ( auto v : data ) {
        cout << v.P << " ";
        for ( auto d : v.vec ) {
            cout << d << " ";
        }

        cout << endl;
    }

    return 0;
#endif

    for ( int i = 0; i < N - 1; i++ ) {
        vector<int> A = data.at(i).vec;

        for ( int j = i + 1; j < N; j++ ) {
            vector<int> B = data.at(j).vec;
            //  価格が同じ場合

            bool Found = true;

            if ( data.at(i).P == data.at(j).P ) {
                //  Aの要素数は Bの要素数より大きいか
                if ( A.size() <= B.size() ) {
                    //cout << "同じ" << endl;
                    continue;
                }

                //  BはAの要素を全て含んでいるか
                for ( auto b : B ) {
                    bool found = find( A.begin(), A.end(), b ) != A.end();

                    if ( found == false ) {
                        Found = false;
                    }
                }
                
                if ( Found == true ) {
                    cout << "Yes" << endl;
                    return 0;
                }

            } else if ( data.at(i).P < data.at(j).P ) {     //  価格が小さい場合

                //  BはAの要素を全て含んでいるか
                for ( auto b : B ) {
                    bool found = find( A.begin(), A.end(), b ) != A.end();

                    if ( found == false ) {
                        Found = false;
                    }
                }
                
                if ( Found == true ) {
                    cout << "Yes" << endl;
                    return 0;
                }

            } else {
                continue;
            }

        }

    }

    cout << "No" << endl;

}
