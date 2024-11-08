#include <iostream>

using namespace std;

//Sequência de Collatz
/* Segundo a conjectura de Collatz, existe uma sequência que começa em um inteiro positivo n e termina em 1, 
sendo cada termo desta sequẽncia calculado em função do termo anterior. Isto é feito de acordo com as seguintes
regras: 
1º: Se o termo anterior for par, o próximo termo deve ser igual ao termo anterior dividido por 2;
2º: Se o termo anterior for ímpar, o próximo termo deve ser igual ao termo anterior multiplicado m por 3 e somado
com 1.
Um exemplo da sequência de Collatz é 5, 16, 8, 4, 2, 1. 
Implemente um programa que leia um número inteiro positivo n denotando o primeiro termo e imprima toda a 
sequência de Collatz em uma mesma linha, separando cada termo por um único espaço em branco.*/

int main ()
{
    int n, restoDaDivisao, valorApresentado;

    cin >> n;
    cout << n << " ";

    while (n != 1)
    {
        restoDaDivisao = n % 2;

        if (restoDaDivisao == 0)
        {
            n = (n / 2);
        } else 
        {
            n = (3 * n) + 1;
        }

        cout << n << " ";
    }

    return 0;
}