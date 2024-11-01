#include <iostream>

using namespace std;

// Ordenação (bubble sort)

/* Nessa ordenação, realizamos sucessivas trocas entre os valores consecutivos levando, a cada interação, o maior
 elemento para o fim da sequência. Assim, na primeira interação, o maior elemento vai para sua posição ordenada 
 (último). Na segunda interação, o segundo maior valor vai para a sua posição (penúltimo). Na terceira interação,
 será a vez do antepenúltimo e assim por diante. 
Esse algoritmo é chamado de bubble sort, descrito pelo seguinte pseudocódigo:

algoritmo bubble_sort(seja A um array de n valores)
    repita
        para i de 1 até n-1
            se A[i-1] > A[i] então
                troca os valores de A[i-1] e A[i]
            fim-se
        fim-para
    enquanto houver troca de valores no laço interno
fim_algoritmo
 */

int main ()
{
// Declaração de variáveis e arrays, juntamente com o recebimento de seus dados
    int N, aux;
    
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
// Impressão pela saída do array
    for (int v: A)
    {
        cout << v << " ";
    }

    cout << endl;

// Algoritmo bubble_sort
    for (int j = 0; j < (N - 1); j++)
    {
        for (int i = 1; i < N; i++)
        {
            if (A[i-1] > A[i])
            {
                aux = A[i];
                A[i] = A[i-1];
                A[i-1] = aux;
            }
        }
        // Impressão linha por linha das alterações realizadas pelo algoritmo
        for (int k = 0; k < N; k++)
        {
            cout << A[k] << " ";
        }

        cout << endl;
    }

    return 0;
}