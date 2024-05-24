#include <iostream>
using namespace std;

int main()
{
    int qtdActions;
    //Vai armazenarn se foi respondido
    int AmigoRespondido[100];
    //Vai o tempo para ser respondido
    int AmigoTempo[100];

    for(int i = 0; i < 100; i++){
        AmigoRespondido[i] = 0;
        AmigoTempo[i] = 0;
    }
    cin >> qtdActions;
    if(qtdActions > 20){
        qtdActions = 20;
    }
    //verificar se foi respondido
    char RAnterior;
    for (int i = 0; i < qtdActions; i++){
        char Registro;
        int X;
        cin >> Registro >> X;
        for(int i = 0; i < 100; i++){
            if(RAnterior != 'T'){
                if(AmigoRespondido[i] < 0){
                    if(Registro == 'T'){
                        AmigoTempo[i] += X;
                    } else {
                        AmigoTempo[i] += 1;
                    }
                }
            }
        }
        RAnterior = Registro;
        if(Registro == 'R'){
            AmigoRespondido[X] -= 1;
        } else if(Registro == 'E'){
            AmigoRespondido[X] += 1;
        }
    }
    for(int i = 0; i < 100; i++){
        if(AmigoRespondido[i] < 0){
            AmigoTempo[i] = -1;
        }
        if(AmigoTempo[i] != 0){
            cout << i << " " << AmigoTempo[i] << endl;
        }
    }
    return 0;
}

