#include <iostream>
using namespace std;

int main(){
    int qtdNumeros;
    int senha[qtdNumeros];
    int saida = 0;
    cin >> qtdNumeros;
    int position = 0;
    for(int i = 0; i < qtdNumeros; i ++){
        int numero;
        cin >> numero;
        if(numero != 0){
            senha[position] = numero;
            position++;
        } else {
            senha[position - 1] = 0;
            position--;
        }
    }
    for(int i = 0; i < qtdNumeros; i++){
        saida += senha[i];
    }
    cout << saida;

    return 0;
}