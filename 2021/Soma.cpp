#include <iostream>
using namespace std;

int main(){
    int qtdNumeros, somaProcurada, Possiveis = 0;
    cin >> qtdNumeros >> somaProcurada;
    int lista[qtdNumeros];

    for(int i = 0; i < qtdNumeros; i++){
        cin >> lista[i];
    }

    for(int i = 0; i < qtdNumeros; i++){
        int soma = 0;
        for(int j = 0; j < qtdNumeros-i; j++){
            soma += lista[i + j];
            if(soma > somaProcurada){
                break;
            } else if(soma == somaProcurada){
                Possiveis++;
            }

        }
    }
    cout << Possiveis;
    return 0;
}