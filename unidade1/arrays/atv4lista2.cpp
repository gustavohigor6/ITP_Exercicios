#include <iostream>

using namespace std;

//Comprimento da Ponte (R03)
/* A prefeitura está pedindo sua ajuda para determinar o comprimento de uma ponte que será construída. A ponte
será construída nos dois pontos mais altos da região. Os dois pontos mais altos sã sempre iguais, então não deve
haver uma ponte inclinada. Escreva um programa que leia um número n (assuma n <=30), em seguida n números inteiros
(todos maiores que 0) representando a altura do terreno. O programa deve escrever na tela o comprimento da ponte
que une os dois pontos mais altos. Assuma que há sempre duas, e somente duas, ocorrências do ponto mais alto e 
que o comprimento da ponte é no mínimo 1.*/

int main ()
{
    int n, altura1, distancia, validacao;
    
    distancia = 0;
    altura1 = 0;

    cin >> n;

    int terreno[n];
    
// Entrada das alturas no terreno
    for (int i = 0; i < n; i++)
    {
        cin >> terreno[i];
    }

// Contabilização da maior altura
    int i;
    for (i = 0; i < n; i++)
    {   
        for (int j = (i+1); j < n; j++)
        {
            if (terreno[i] >= terreno[j])
            {
                altura1 = terreno[i];
                validacao = 0;
            } else {
                validacao++;
                break;
            }
        }
        if (validacao == 0)
        {
            break;
        }
    }

    do
    {   
        distancia++;
        i++;
    } while (altura1 != terreno[i+1]);
     
    cout << distancia << endl;
    return 0;
}