#include <iostream>
using namespace std;

// Soma dos dígitos

/* Escreva um programa que lê um número inteiro n e imprime a soma dos dígitos desse
número. */

int main () {
    int num, soma, aux;

    soma = 0;

    cin >> num;

    //Escrever como laço condicional.

    do
    {
        aux = (num % 10);
        soma += aux;
        num /= 10;
    } while (num != 0);
    

    /*while (num != 0) {
        aux = (num % 10);
        soma = (soma + aux);
        num = (num / 10);
    }*/

    cout << soma << endl;

    return 0;
}