#include <iostream>

using namespace std;

//Impedimento no VAR
/* A Conmebol resolveu atualizar seu sistema de VAR e pediu para você fazer um pequeno programa para verificar se
num determinado momento há jogadores impedidos (em qualquer um dos times). 

Seu programa deve então ler da entrada-padrão os quatro arrays. Os dois primeiros contêm os números (das 
camisas) dos jogadores dos times A e B, respectivamente. Os dois seguintes possuem as posições no campo dos 
respectivos jogadores (na mesma ordem dos dois arrays iniciais). Seu programa deve enviar para a saída padrão 
duas linhas. A primeira deve conter o texto "A: ", seguido dos números dos jogadores do time A que se encontram
impedidos ou o texto "sem impedimento", se não houver impedimento. A segunda linha deve conter o texto "B: " 
seguido dos números dos jogadores do time B que se encontram impedidos ou o texto "sem impedimento", se não 
houver impedimento.*/

int main () {
    int timeA[10], timeB[10];
    float posicaoA[10], posicaoB[10];

// Entrada de dados para os números das camisas do time A
    for (int i = 0; i < 10; i++)
    {
        cin >> timeA[i];
    }

// Entrada de dados para os números das camisas do time B
    for (int i = 0; i < 10; i++)
    {
        cin >> timeB[i];
    }

// Entrada de dados para as posições dos jogadores do time A
    for (int i = 0; i < 10; i++)
    {
        cin >> posicaoA[i];
    }

// Entrada de dados para as posições dos jogadores do time B
    for (int i = 0; i < 10; i++)
    {
        cin >> posicaoB[i];
    }

// Verificação dos impedimentos do time A
    int impedimentoA, impedimentoB, auxA, auxB;
    
    impedimentoA = 0;
    auxA = 0;
    auxB = 0;

    cout << "A: ";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((posicaoA[i] > posicaoB[j]) && (posicaoA[i] > 0))
            {
                impedimentoA++;
            } else {
                impedimentoA = 0;
                break;
            }
        }
        if (impedimentoA != 0)
        {
            cout << timeA[i] << " ";
            auxA++;
        }
    }

    if (auxA == 0)
    {
        cout << "sem impedimentos" << endl;
    } else {
        cout << endl;
    }

// Verificação dos impedimentos do time B
    impedimentoB = 0;

    cout << "B: ";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((posicaoB[i] < posicaoA[j]) && (posicaoB[i] < 0))
            {
                impedimentoB++;
            } else {
                impedimentoB = 0;
                break;
            }
        }
        if (impedimentoB != 0)
        {
            cout << timeB[i] << " ";
            auxB++;
        }
    }
    if (auxB == 0)
    {
        cout << "sem impedimentos" << endl;
    } else {
        cout << endl;
    }

    return 0;
}