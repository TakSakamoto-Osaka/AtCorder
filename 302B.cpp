#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for ( int i = 0; i < (n); i++ )

int main() 
{
    int H, W;
    cin >> H >> W;

    vector<string> vec(H);
    for ( int i = 0; i < H; i++ ) {
        cin >> vec[i];
    }

    for ( int i = 0; i < H; i++ ) {
        for ( int j = 0; j < W; j++ ) {
            string tmp = "";

            //  横
            if ( j <= W - 5 ) {
                tmp = vec[i].substr( j, 5 );
                if ( tmp == "snuke" ) {
                    for ( int k = 0; k < 5; k++ ) {
                        cout << i + 1 << " " << j + 1 + k << endl;
                    }
                    return 0;
                } 
                
                if ( tmp == "ekuns" ) {
                    for ( int k = 4; k >= 0; k-- ) {
                        cout << i + 1 << " " << j + 1 + k << endl;
                    }
                    return 0;
                } 
            }

            //  縦
            if ( i <= H -5 ) {
                char ch[6] { vec[i][j], vec[i+1][j], vec[i+2][j], vec[i+3][j], vec[i+4][j], 0};
                tmp = ch;

                if ( tmp == "snuke" ) {
                    for ( int k = 0; k < 5; k++ ) {
                        cout << i + 1 + k << " " << j + 1 << endl;
                    }
                    return 0;
                }

                if ( tmp == "ekuns" ) {
                    for ( int k = 4; k >= 0; k-- ) {
                        cout << i + 1 + k << " " << j + 1 << endl;
                    }
                    return 0;
                }
            }

#if true
            //  右上斜め
            if ( i >= 4 && j <= W - 5 ) {
                char ch[6] = { vec[i][j], vec[i-1][j+1], vec[i-2][j+2], vec[i-3][j+3], vec[i-4][j+4], 0 };
                tmp = ch;

                if ( tmp == "snuke" ) {
                    for ( int k = 0; k < 5; k++ ) {
                        cout << i + 1 - k << " " << j + 1 + k << endl;
                    }
                    return 0;
                }

                if ( tmp == "ekuns" ) {
                    for ( int k = 4; k >= 0; k-- ) {
                        cout << i + 1 - k << " " << j + 1 + k << endl;
                    }
                    return 0; 
                }
            }
#endif

            //  右下斜め
            if ( i <= H - 5 && j <= W -5 ) {
                char ch[6] = { vec[i][j], vec[i+1][j+1], vec[i+2][j+2], vec[i+3][j+3], vec[i+4][j+4], 0 };
                tmp = ch;

                //cout << tmp << endl << endl;

                if ( tmp == "snuke" ) {
                    for ( int k = 0; k < 5; k++ ) {
                        cout << i + 1 + k << " " << j + 1 + k << endl; 
                    }
                    return 0;
                }

                if ( tmp == "ekuns" ) {
                    for ( int k = 4; k >= 0; k-- ) {
                        cout << i + 1 + k << " " << j + 1 + k << endl;
                    }
                    return 0;
                }
            }
        }
    }
}
