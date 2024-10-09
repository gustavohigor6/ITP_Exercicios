#include <iostream>
using namespace std;

int main () {
    // Recebe três números inteiros como os tamanhos dos três lados de um triângulo
    int lado1, lado2, lado3;

    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    int soma1, soma2, soma3;
    
    soma1 = lado2 + lado3;
    soma2 = lado1 + lado3;
    soma3 = lado1 + lado2;
    
    if ((lado1 < soma1) && (lado2 < soma2) && (lado3 < soma3)){
        cout << "possivel" << endl;
    } else {
        cout << "impossivel" << endl;
    }
    return 0;
}