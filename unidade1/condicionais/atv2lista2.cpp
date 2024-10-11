#include <iostream>
#include <cmath>
using namespace std;

//Terno Pitagórico Desordenado

/* Dados três valores inteiros positivos, a, b e c, sendo c o maior valor, eles são
chamados de terno pitagórico quando: a² + b² = c²
Escreva um programa que lê três valores inteiros e verifica se formam um terno 
pitagórico. Note que, os valores são fornecidos em qualquer ordem. Portanto, atende
atente ao valor de c.*/

int main () {
    int num1, num2, num3, a, b, c;

    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        a = num2;
        b = num3;
        c = num1;
    } else if (num2 > num1 && num2 > num3) {
        a = num1;
        b = num3;
        c = num2;
    } else {
        a = num1;
        b = num2;
        c = num3;
    }

    int somaDosQuadrados, quadradoDeC;

    somaDosQuadrados = (pow(a, 2) + pow(b, 2));

    quadradoDeC = pow(c, 2);

    if (somaDosQuadrados == quadradoDeC) {
        cout << "Pythagorean triple!" << endl;
    } else {
        cout << "Not a Pythagorean triple!" << endl;
    }

    return 0;
}