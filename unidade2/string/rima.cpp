#include <iostream>
#include <string>

using namespace std;

// Escreva um programa que lê duas strings e verifica se a segunda termina com a primeira.

int main()
{
    string nome1, nome2;
    cin >> nome1 >> nome2;

    int tamanhoNome2 = nome2.size();
    int indiceNome1 = (nome1.size() - tamanhoNome2);
    int validacaoRima = 0;
    int i = 0;

    for (int j = indiceNome1; j < nome1.size(); j++)
    {
        if (nome1[j] == nome2[i] || nome1[j] == nome2[i] - 32 || nome1[j] == nome2[i] + 32)
        {
            validacaoRima++;
        }
        i++;
    }

    if (validacaoRima == tamanhoNome2)
    {
        cout << "rima" << endl;
    }
    else 
    {
        cout << "não rima" << endl;
    }

    return 0;
}