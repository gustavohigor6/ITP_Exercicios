#include <iostream>

using namespace std;

// Ordenação (exchange sort)

/* Em várias situações precisamos ordenar informações. Um dos algoritmos de ordenação mais simples (de implementar)
realiza sucessivas trocas levando, a cada interação, o menor elemento para o início da sequência. Assim, na 
primeira interação, o menos elemento vai para a sua posição ordenada (o início da sequência). Na segunda 
interação, o segundo menor vai para a segunda posição. Na terceira interação, será a vez do terceiro e assim 
por diante.

Esse algoritmo é descrito em pseudocódigo da seguinte maneira: 

algoritmo exchange_sort(seja A um array de n valores)
    para i de 0 até n-2
        para j de i+1 até n-1
            se A[i] > A[j] então
                troca os valores de A[i] e A[j]
            fim-se
        fim-para
    fim-para
fim-algoritmo
*/

int main ()
{
    int N, aux;

    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        cout << A[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < (N - 1); i++)
    {
        for (int j = (i + 1); j < N; j++)
        {
            if (A[i] > A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}