#include <iostream>

using namespace std;

// Soma dos números primos

/* Dados n números inteiros positivos, calcular a soma dos que são primos. A primeira entrada do seu programa deverá ser o número inteiro n que fará 
referência a quantidade de números que serão digitados em seguida. */

int main ()
{
    int quantDeNum, num, auxiliar2, divisor, auxiliar4, soma;

    cin >> quantDeNum;

    soma = 0;

    for (int contador = 0; contador < quantDeNum; contador++)
    {
        divisor = 2;
        auxiliar4 = 0;

        cin >> num;

        if (num == 2)
        {
            soma += num;
        }
        else if (num != 1)
        {
            do
            {
                auxiliar2 = (num % divisor);
                if (auxiliar2 != 0)
                {
                    divisor++;
                }
                else 
                {   
                    auxiliar4++;
                    break;
                }
            } while (divisor < num);

            if (auxiliar4 == 0)
            {
                soma += num;
            }
            else 
            {
                soma = soma;
            }
        }
            
    }
    cout << soma << endl;
    
    return 0;
}
