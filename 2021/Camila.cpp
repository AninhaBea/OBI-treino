#include <iostream>
using namespace std;

int main(){
    int I1, I2, I3, Camila;
    cin >> I1 >> I2 >> I3;
    if((I1 > I2 and I1 <I3) or (I1 < I2 and I1 > I3)){
        Camila = I1;
    } else if((I2 > I3 and I2 <I1) or (I2 < I3 and I2 > I1)){
        Camila = I2;
    } else if((I3 > I1 and I3 <I2) or (I3 < I1 and I3 > I2)){
        Camila = I3;
    }
    cout << Camila;


    return 0;
}