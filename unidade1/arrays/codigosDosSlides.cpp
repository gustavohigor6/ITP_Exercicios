#include <iostream>
using namespace std;

//Vetor legal

/* Um vetor eh legal caso a diferença entre um elemento e seu antecessor seja par. Escreva um programa que lê
um número inteiro positivo n e em seguida os n valores do vetor. Então, exibe a mensagem "Legal" quando o vetor
for legal, e "Chato" caso contrário. Considere 0 par.*/

int main ()
{
    int n;

    cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    for (int v: vetor)
    {
        cout << v << " ";
    }

    return 0;
}