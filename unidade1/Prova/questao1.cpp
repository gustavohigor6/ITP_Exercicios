#include <iostream>

using namespace std;

// Projetar um Móbile
/* Escreva um programa que verifique se, dados os pesos de 4 peças, elas 
poderão ou não ser montadas como o móbile acima.*/

int main ()
{
    int pesoA, pesoB, pesoC, pesoD;

    cin >> pesoA >> pesoB >> pesoC >> pesoD;

    if ((pesoA == (pesoB + pesoC + pesoD)) && (pesoD == (pesoB + pesoC)) && (pesoB == pesoC))
    {
        cout << "S" << endl;   
    }
    else {
        cout << "N" << endl;
    }
    return 0;
}