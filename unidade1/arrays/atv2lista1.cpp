#include <iostream>
using namespace std;

//Somar três vetores em C

/* Crie um programa em C que deve receber três vetores do tipo int, denominados A, B, C, com um número específico
de elementos mas todos do mesmo tamanho N. O programa deve solicitar inicialmente o tamanho do vetor e, em seguida
os respectivos elementos. Depois, deve-se calcular a soma dos elementos de cada posicao correspondente nos vetores
A, B e C e armazenar os resultados em um vetor D, de tamanho N. Por fim, o programa deve exibir os valores do 
vetor resultante D, separados por espaços.*/

int main ()
{
    int n;

    cin >> n;

    int a[n], b[n], c[n], d[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }

    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
    }

    for (int x = 0; x < n; x++)
    {
        d[x] = (a[x] + b[x] + c[x]);
    }

    for (int v: d)
    {
        cout << v << " ";
    }

    return 0;
}