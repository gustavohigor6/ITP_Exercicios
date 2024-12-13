#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "praticas1.cpp"

TEST_CASE("Testando a prática 1: calculadora da exponenciação")
{
    CHECK(potencia_recursiva(2, 5) == 32);
    CHECK(potencia_recursiva(5, 4) == 625);
    CHECK(potencia_recursiva(9, 5) == 59049);
    CHECK(potencia_recursiva(1999, 0) == 1);
}

TEST_CASE("Testando a prática 2: somatório do array de inteiros")
{
    int v1[4] = {2, 3, 4, 5};
    int v2[8] = {12, 56, 20, 13, 59, 12, 45, 69};
    int v3[0] = {};
    int v4[1] = {1000};
    int v5[3] = {-5, -6, -3};
    CHECK(soma_array(v1, 4) == 14);
    CHECK(soma_array(v2, 8) == 286);
    CHECK(soma_array(v3, 0) == 0);
    CHECK(soma_array(v4, 1) == 1000);
    CHECK(soma_array(v5, 3) == -14);
}

TEST_CASE("Testando a prática 3: maior valor de um array")
{
    int v1[4] = {2, 3, 4, 5};
    int v2[8] = {12, 56, 20, 13, 59, 12, 45, 69};
    int v3[1] = {0};
    int v4[1] = {1000};
    int v5[3] = {-5, -6, -3};
    CHECK(maior_valor(v1, 4) == 5);
    CHECK(maior_valor(v2, 8) == 69);
    CHECK(maior_valor(v3, 1) == 0);
    CHECK(maior_valor(v4, 1) == 1000);
    CHECK(maior_valor(v5, 3) == -3);
}