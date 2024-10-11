#include <iostream>
using namespace std;

// Os 3 brinquedos
/* Há 3 crianças em uma sala, cada uma com um dos 3 brinquedos numerados de 1 a 3. 
Cada criança então diz um número: positivo se é o brinquedo que ela está usando ou 
negativo se é o brinquedo que ela não está usando. Por exemplo, se a criança disser -2,
significa que ela não está usando o brinquedo 2. Seu programa deve ler do usuário 
cada um desses números e, a partir dessas informações, seu programa deve escrever, 
da primeira até a terceira criança, com qual brinquedo cada uma está ou uma
interrogração caso não seja possível afirmar. */


//Revisar a correção feita pelo professor

int main() {
    int a, b, c, qtd;

    cin >> a >> b >> c;

    int abs_a = abs(a);
    int abs_b = abs(b);
    int abs_c = abs(c);

    qtd = 0;
    if (a < 0) qtd++;
    if (b < 0) qtd++;
    if (c < 0) qtd++;

    if (qtd == 1) {
        if (a < 0) {
            a = 6 - (b + c);
        }
        else if (b < 0) {
            b = 6 - (a + c);
        }
        else {
            c = 6 - (a + b);
        }
    }
    else if (qtd == 2) {
        if (a == -b && abs_a != abs_c) {
            if (abs_a != abs_c) {
                c = 6 - (abs_c + abs_a);
                if (a < 0) {
                    a = 6 - (b + c);
                }
                else {
                    b = 6 - (a + c);
                }
            }
        }
        else if (a == -c && abs_a != abs_b) {
            b = 6 - (abs_b + abs_a);
            if (a < 0) {
                a = 6 - (b + c);
            }
            else {
                c = 6 - (a + b);
            }
        }
        else if (b == -c && abs_a != abs_b) {
            a = 6 - (abs_a + abs_b);
            if (b < 0) {
                b = 6 - (a + c);
            }
            else {
                c = 6 - (a + b);
            }
        }
        else if (a < 0 && b < 0 && abs_a != abs_c) {
            a = abs_b;
            b = abs_a;
        }
        else if (a < 0 && c < 0 && abs_a != abs_b) {
            a = abs_c;
            c = abs_a;
        }
        else if (b < 0 && c < 0 && abs_a != abs_c) {
            b = abs_c;
            c = abs_b;
        }

    }
    else if (qtd == 3) {
        if (a == b) {
            c = abs_a;
        }
        else if (a == c) {
            b = abs_a;
        }
        else if (b == c) {
            a = abs_b;
        }
    }

    cout << (char)(a < 0 ? '?' : '0' + a) << ' ';
    cout << (char)(b < 0 ? '?' : '0' + b) << ' ';
    cout << (char)(c < 0 ? '?' : '0' + c) << endl;
}