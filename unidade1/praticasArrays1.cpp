#include <iostream>

using namespace std;

/* Dado um valor inteiro N e uma sequência de N valores inteiros,
imprimir “SIM” se a sequência e seu inverso são iguais, ou “NÃO” caso
contrário. */

int main ()
{
    int n;

    cin >> n;

    int sequencia[n], inversa[n];

    for (int i = 0; i < n; i++)
    {
        cin >> sequencia[i];
    }

    int k;
    k = (n - 1);
    
    for (int j = 0; j < n; j++)   
        {
            inversa[j] = sequencia[k];

            k--;
        }
    
    if (inversa == sequencia)
    {
        cout << "SIM" << endl;
    } 
    else
    {
        cout << "NÃO" << endl;
    }


    return 0;
}