#include <iostream>

using namespace std;

/* Faça um programa que leia um valor T e preencha um vetor N[10] 
com a sequência de valores de 0 até T-1 repetidas vezes, conforme o
exemplo abaixo. Imprima o vetor N.*/

int main() 
{
    int valorT, contador;

    cin >> valorT;

    int vetor[10];
    
    contador = 0;

    if (valorT <= 10)
    {
        while (contador < 10)
        {
            for (int i = 0; i < valorT; i++)
            {  
                vetor[contador] = (i);
                contador++;
                if (contador == 10){
                    break;
                }
            }
        }

    } 
    else 
    {   
        contador = 0;

        for (int i = 0; i < 10; i++)
        {
            vetor[i] = contador;
            contador++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}