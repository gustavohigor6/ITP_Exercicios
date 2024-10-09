#include <iostream>
using namespace std;

//Divida a por b se for divisível

int main () {
    //Ler dois numeros inteiros a e b
    int a, b;

    cin >> a;
    cin >> b;

    //Somente no caso de b dividir a, escreva na tela "Resultado:" e o resultado da divisao

    int operacao1, operacao2;

    operacao1 = a % b;
    operacao2 = a / b;

    if (operacao1 == 0) {
        cout << "Resultado: " << operacao2 << endl;
    }
    else {

    }
    return 0;
}