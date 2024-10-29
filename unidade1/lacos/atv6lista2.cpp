#include <iostream>

using namespace std;

// Sequência decrescente-crescente
/* Implemente um programa que receba como entrada um número inteiro positivo N. O programa deve imprimir a
sequência N...321234..N*/

int main ()
{
    int num, contInicialLop1;

    cin >> num;

    if (num != 1)
    {
        cout << num;

        contInicialLop1 = 0;

        for (contInicialLop1 = num - 1; contInicialLop1 >= 1 ; contInicialLop1--)
        {
            cout << contInicialLop1;
        }
        
        contInicialLop1 = 1;

        do
        {
            contInicialLop1++;;
            cout << contInicialLop1;

        } while (contInicialLop1 < num);
    }
    else 
    {
        cout << num;
    }
    return 0;
}