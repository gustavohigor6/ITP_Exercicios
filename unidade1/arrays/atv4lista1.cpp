#include <iostream>
using namespace std;

//Mais lotes, por favor!

/* Você tem um lote de terreno em uma rua, no qual pretende construir um empreendimento. Mas antes de calcular
os custos envolvidos, você gostaria de verificar quantos lotes vazios adicionais a partir do seu lote você pode
tentar adquirir para uma futura expansão, sem passar por outros lotes já ocupados. Para resolver essa questão, 
você resolveu criar um programa que leia um inteiro n (n <= 20), o número de lotes na rua, seguido de n inteiros
com 3 valores possíveis: 
2 = significa o seu lote
1 = significa que o lote já está ocupado
0 = significa que o lote está vazio

O seu programa deve escrever quantos lotes vazios voce pode tentar adquirir para expandir o seu empreendimento. 
Por exemplo, considere n=7 lotes com os seguintes valores= 0100201. Neste caso o seu lote está na quinta posição
e o programa deve escrever 3, pois você pode tentar adquirir 2 lotes vazios à esquerda e 1 lote vazio à direita.
O lote da primeira posição não deve ser contado, pois no caminho da expansão há um lote ocupado na segunda posição.
*/

int main ()
{
    int lotes, somaEsquerda, somaDireita;

    somaDireita = 0;
    somaEsquerda = 0;

    cin >> lotes;

    int status[lotes];

    for (int i = 0; i < lotes; i++)
    {
        cin >> status[i];
    }

    for (int j = 0; status[j] != 2; j++)
    {
        if (status[j] == 0)
        {
            somaEsquerda++;
        } else if (status[j] == 1)
            {
                somaEsquerda = 0;
            }
    }

    for (int k = (lotes - 1); status[k] != 2; k--)
    {
        if (status[k] == 0)
        {
            somaDireita++;
        } else if (status[k] == 1)
            {
                somaDireita = 0;
            }
    }

    int lotesDisponiveis;

    lotesDisponiveis = (somaDireita + somaEsquerda);

    cout << lotesDisponiveis << endl;
    
    return 0;
}