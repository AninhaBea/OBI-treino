#include <iostream>
using namespace std;

int main(){
    int qtdNegociations, qtdPessoas, S2 = 0, Money = 0;
    char S1 = 'N';
    cin >> qtdNegociations >> qtdPessoas;
    int Dinheiro[qtdPessoas] = {0};
    int Deu[qtdPessoas] = {0};
    int Recebeu[qtdPessoas] = {0};

    for(int i = 0; i < qtdNegociations; i++){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        Money += Y;
        Deu[X] += Y;
        Recebeu[Z] += Y;
        Dinheiro[X] -= Y;
        Dinheiro[Z] += Y;
    }
    for(int i = 0; i < qtdPessoas; i++){
        if(Deu[i] > 0 && Recebeu[i] > 0){
            S1 = 'S';
            break;
        }
    }
    if(S1 == 'S'){
        for(int i = 0; i < qtdPessoas; i++){
            if(Dinheiro[i] > 0){
                S2 += Dinheiro[i];
            }
        }
    } else {
        S2 = Money;
    }
    cout << S1 << endl << S2;

    return 0;
}