#include <iostream>
using namespace std;

// Pares, ímpares, positivos e negativos

/* Escreva um programa que leia 5 valores inteiros. A seguir, mostre quantos valores 
digitados foram pares, quantos valores digitados foram positivos e quantos valores 
digitados foram negativos. Imprima a mensagem conforme o exemplo fornecido, uma 
mensagem por linha (utilizar o "\n"), exatamente na sequência "valores pares", 
"valores impares", "valores positivos" e "valores negativos". OBS: Nesse programa
o número 0 é considerado par. */

int main () {
    int par, impar, positivo, negativo, num, contador;
    
    par = 0;
    impar = 0;
    positivo = 0;
    negativo = 0;
    contador = 0;

    while (contador < 5) {
        cin >> num;

        if (num < 0) {
            negativo++;;
        } else {
            if (num > 0) {
                positivo++;
            }
        }

        if ((num % 2) == 0 || num == 0) {
            par++;
        } else {
            if ((num % 2) != 0) {
                impar++;
            }
        }
        contador++;
    }
    
    cout << par << " valores pares" "\n" << impar << " valores impares" "\n" << positivo << " valores positivos" "\n" << negativo << " valores negativos" << endl;  

    return 0;
}
