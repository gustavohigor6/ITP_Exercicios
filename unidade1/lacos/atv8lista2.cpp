#include <iostream>

using namespace std;

//Apenas dígitos ímpares

/* Implemente um programa que receba um número inteiro positivo x. O programa deve imprimir uma mensagem 
informando se x é formado apenas por dígitos ímpares ou não.*/

int main ()
{
    int n, restoDaDivisao, divisao, impar, validacao;
    
    validacao = 0;
    
    cin >> n;

    do
    {
        divisao = (n / 10);
        restoDaDivisao = (n % 10);
        impar = (restoDaDivisao % 2);
        n = divisao;

        if (impar == 0)
        {
            validacao++;
            break;
        }

    } while (n != 0);
    
    if (validacao == 0)
    {
        cout << "O numero e formado apenas por digitos impares" << endl;
    } else {
        cout << "O numero nao e formado apenas por digitos impares" << endl;
    }
    
    return 0;
}