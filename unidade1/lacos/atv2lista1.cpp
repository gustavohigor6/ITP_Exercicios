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
    int num1, num2, num3, num4, num5;
    int par = 0, impar = 0, positivo = 0, negativo = 0;
    // int calculoPar, calculoImpar;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Como fazer esse programa por estruturas de repetição?
    // Gustavo, você é um tosco por ter feito esse código KKKKKKKKKK

    if (num1 < 0) negativo++;
    if (num2 < 0) negativo++;
    if (num3 < 0) negativo++;
    if (num4 < 0) negativo++;
    if (num5 < 0) negativo++;

    if (num1 > 0) positivo++;
    if (num2 > 0) positivo++;
    if (num3 > 0) positivo++;
    if (num4 > 0) positivo++;
    if (num5 > 0) positivo++;

    if ((num1 % 2) == 0 || (num1 == 0)) par++;
    if ((num2 % 2) == 0 || (num2 == 0)) par++;
    if ((num3 % 2) == 0 || (num3 == 0)) par++;
    if ((num4 % 2) == 0 || (num4 == 0)) par++;
    if ((num5 % 2) == 0 || (num5 == 0)) par++;

    if ((num1 % 2) != 0) impar++;
    if ((num2 % 2) != 0) impar++;
    if ((num3 % 2) != 0) impar++;
    if ((num4 % 2) != 0) impar++;
    if ((num5 % 2) != 0) impar++;

    cout << par << " valores pares" << "\n" << impar << " valores impares" << "\n" << positivo << " valores positivos" << "\n" << negativo << " valores negativos" << endl;

    return 0;
}
