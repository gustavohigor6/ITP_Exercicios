#include <iostream>
using namespace std;

//Pipoca

/* Você comprou um ingresso para assistir a um filme no cinema. Você lembrou que toda vez que precisar se levantar
para ir comprar pipoca, tem que pedir licença para todas as pessoas do seu assento até uma das duas saídas da 
fileira. Como você quer incomodar o menor número de pessoas possível, resolveu escrever o programa para ajudar a 
decidir para qual lado você deve sair. O seu programa deve ler um número inteiro n (n <= 20), o número de assentos
na fileira, seguidos de n inteiros com 3 valores possíveis. 
2 = significa que é o seu assento
1 = significa que o assento está ocupado com alguma outra pessoa
0 = significa que o assento está livre. 
O seu programa deve escrever "direita" se houver menos pessoas à direita do seu assento, "esquerda" se houver 
menos pessoas à esquerda do seu assento e "tanto faz" se houver a mesma quantidade de pessoas para ambos os lados.

*/

int main ()
{
    int qntdAssentos, somaEsquerda, somaDireita;

    somaEsquerda = 0;
    somaDireita = 0;

    cin >> qntdAssentos;

    int statusAssento[qntdAssentos];

    for (int i = 0; i < qntdAssentos; i++)
    {
        cin >> statusAssento[i];
    }

    for (int j = 0; statusAssento[j] != 2; j++)
    {
        somaEsquerda += statusAssento[j];
    }

    for (int k = (qntdAssentos - 1); statusAssento[k] != 2; k--)
    {
        somaDireita += statusAssento[k];
    }

    if (somaEsquerda > somaDireita)
    {
        cout << "direita" << endl;
    } else if (somaDireita > somaEsquerda)
        {
            cout << "esquerda" << endl;
        } else
        {
            cout << "tanto faz" << endl;
        }
    return 0;
}