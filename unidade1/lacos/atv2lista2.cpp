#include <iostream>

using namespace std;

//Número perfeito

/*Um número perfeito é um número natural para o qual a soma de todos os seus divisores
(excluindo ele mesmo) é igual ao próprio número. Por exemplo, 6 é um número perfeito
pois 6 = 1 + 2 + 3. Escreva um programa que, dado um número inteiro n>=2, imprima na 
tela todos os números perfeitos menores que n*/

int main ()
{
    int num, divisores, calculo, aux;
    
    aux = 6;
    cin >> num;

    do
    {
        divisores = 0;

        for (int i = 1; i < aux; i++)
        {
            calculo = (aux % i);

            if (calculo == 0)
            {
                divisores += i;
            }
        }

        if (divisores == aux)
        {
            cout << divisores << endl; 
        }

        aux++;

    } while (aux <= num);
    
    return 0;
}
