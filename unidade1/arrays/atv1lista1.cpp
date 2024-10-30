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

    int vetor[n], calculoPar, validacao;

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 1; i < n; i++)
    {
        validacao = 0;
        calculoPar = ((vetor[i] - vetor[i - 1])%2);

        if (calculoPar != 0)
        {
            validacao++;
            break;
        }
    }

    if (validacao == 0)
    {
        cout << "Legal" << endl;
    }
    else
    {
        cout << "Chato" << endl;
    }

    return 0;
}