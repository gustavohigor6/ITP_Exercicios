#include <iostream>
#include <cmath>

using namespace std;

/* PRÁTICA 1
Dado um número inteiro positivo N, imprimir as primeiras N potências de
2 (lembre-se que a primeira potência de 2 é 2⁰ = 1.*/

int main () {
    int dado, potencia = 0, resultado = 0;

    cin >> dado;

    if (dado > 0) {
        do
        {
            resultado = pow(2, potencia);
            cout << resultado << endl;
            potencia++;
        } while (potencia <= dado);
        
    } else {
        cout << "Dado inserido inválido" << endl; 
    }
    
    return 0;
}