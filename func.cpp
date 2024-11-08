#include <iostream>

using namespace std;

// Minhas funções

int par (int x) {
    int validacao;

    validacao = (x % 2);

    if (validacao == 0)
    {
        return 0;
    }
    return 1;
}