#include <iostream>
#include <string>
using namespace std;

string cifra(char letra){
    string cifrado;
    switch (letra){
    case 'a':
        cifrado = "a";
        break;
    case 'b':
        cifrado = "bac";
        break;
    case 'c':
        cifrado = "cad";
        break;
    case 'd':
        cifrado = "def";
        break;
    case 'e':
        cifrado = "e";
        break;
    case 'f':
        cifrado = "feg";
        break;
    case 'g':
        cifrado = "geh";
        break;
    case 'h':
        cifrado = "hij";
        break;
    case 'i':
        cifrado = "i";
        break;
    case 'j':
        cifrado = "jik";
        break;
    case 'k':
        cifrado = "kil";
        break;
    case 'l':
        cifrado = "lim";
        break;
    case 'm':
        cifrado = "mon";
        break;
    case 'n':
        cifrado = "nop";
        break;
    case 'o':
        cifrado = "o";
        break;
    case 'p':
        cifrado = "poq";
        break;
    case 'q':
        cifrado = "qor";
        break;
    case 'r':
        cifrado = "ros";
        break;
    case 's':
        cifrado = "sut";
        break;
    case 't':
        cifrado = "tuv";
        break;
    case 'u':
        cifrado = "u";
        break;
    case 'v':
        cifrado = "vux";
        break;
    case 'x':
        cifrado = "xuz";
        break;
    case 'z':
        cifrado = "zuz";
        break;
    }
    return cifrado;
}
int main(){
    string palavra;
    string palavraCifrada;
    cin >> palavra;
    for(int i = 0; i < palavra.length(); i++){
        palavraCifrada += cifra(palavra[i]);
    }
    cout << palavraCifrada;

    return 0;
}