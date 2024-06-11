#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    char mapa[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> mapa[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(mapa[i][j] == '#' && mapa[i-1][j] == 'o'){
                mapa[i-1][j-1] = 'o';
                mapa[i-1][j+1] = 'o';
                if(mapa[i][j-1] == '.'){
                    mapa[i][j-1] = 'o';
                }
                if(mapa[i][j+1] == '.'){
                    mapa[i][j+1] = 'o';
                }
            }
            if(mapa[i-1][j] == 'o' && mapa[i][j] == '.'){
                mapa[i][j] = 'o';
            }
        }
        for(int j = M-1; j >= 0; j--){
            if(mapa[i][j] == '#' && mapa[i-1][j] == 'o'){
                mapa[i-1][j-1] = 'o';
                mapa[i-1][j+1] = 'o';
                if(mapa[i][j-1] == '.'){
                    mapa[i][j-1] = 'o';
                }
                if(mapa[i][j+1] == '.'){
                    mapa[i][j+1] = 'o';
                }
            }
            if(mapa[i-1][j] == 'o' && mapa[i][j] == '.'){
                mapa[i][j] = 'o';
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << mapa[i][j];
        }
        cout << endl;
    }

    return 0;
}