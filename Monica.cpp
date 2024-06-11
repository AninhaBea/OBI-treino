#include <iostream>
using namespace std;

int main(){
    int Monica, F1, F2;
    int MaisVelho;
    cin >> Monica >> F1 >> F2;
    MaisVelho = Monica - F1 - F2;
    if(F1 > MaisVelho){
        MaisVelho = F1;
    }
    if(F2 > MaisVelho){
        MaisVelho = F2;
    }
    cout << MaisVelho;
    return 0;
}