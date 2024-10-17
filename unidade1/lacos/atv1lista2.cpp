#include <iostream>

using namespace std;

//Números primos

/* Escreva um programa que lê um valor inteiro >N e imprime uma mensagem indicando
se N é um número primo ou não.*/

int main () 
{
    int num, restoDaDivisao, contador;
    restoDaDivisao = 0;
    contador = 0;

    cin >> num;
    /*
    for (int i = 1; i > num ; i++)
    {
        int calculo;

        calculo = (num % i);

        if (calculo != 0)
        {
            restoDaDivisao++;
        }
    }
    */
    do
    {
        int calculo;
        contador++;

        calculo = (num % contador);

        if (calculo != 0)
        {
            restoDaDivisao++;
        }
    } while (contador < num);
    

    if (restoDaDivisao == (num - 2))
    {
        cout << num << " é primo" << endl;
    } else {
        cout << num << " não é primo" << endl;
    }

    return 0;
}