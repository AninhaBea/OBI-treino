#include <iostream>
using namespace std;

int main(){
    int N, C, M;
    cin >> N >> C >> M;
    int Carimbadas = C;
    int raras[C] = {0};
    for(int i = 0; i < C; i++){
        int num;
        cin >> num;
        raras[i] = num;
    }
    for(int i = 0; i < M; i++){
        int num;
        cin >> num;
        for(int j = 0; j < C; j++){
            if(num == raras[j]){
                Carimbadas -= 1;
                raras[j] = -1;
            }
        }
    }
    cout << Carimbadas;

    return 0;
}