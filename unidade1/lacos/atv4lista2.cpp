#include <iostream>

using namespace std;

//Sequência de Fibbonacci.

int main () 
{
    int num, auxiliar1, auxiliar2, fibbonacci;

    auxiliar1 = 1;
    fibbonacci = 1;
    cin >> num;

    while (fibbonacci < num)
    {
        if (fibbonacci == 1)
        {
            cout << auxiliar1 << " " << fibbonacci << " ";
            fibbonacci++;
        }
        else
        {   
            auxiliar2 = auxiliar1;
            fibbonacci += auxiliar1;
            auxiliar1 = (fibbonacci - auxiliar2);
            cout << auxiliar1 << " ";        
        }
    }
    

    return 0;
}
