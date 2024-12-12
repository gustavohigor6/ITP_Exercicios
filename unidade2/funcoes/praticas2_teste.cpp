#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "praticas2.cpp"

TEST_CASE("Testando a prática 1: Resultado de uma potência")
{
    float num1 = 13.824;

    CHECK(power(2, 2) == 4);
    CHECK(power(5, 3) == 125);
    CHECK(power(9, 9) == 387420489);
}

TEST_CASE("Testando a prática 2: Maior valor de um vetor")
{
    int vetor1[] = {1, 2, 3, 4, 5, 6};
    int vetor2[] = {-10, -12, -5, -1, 0};
    int vetor3[] = {1, 1};
    int vetor4[] = {1, 3, 5, 7, -3, 19, 27, 44};

    CHECK(max(vetor1, 6) == 6);
    CHECK(max(vetor2, 5) == 0);
    CHECK(max(vetor3, 1) == 1);
    CHECK(max(vetor4, 8) == 44);
}

TEST_CASE("Testando a prática 5: Distância entre dois pontos")
{
    CHECK(distancia(3.0, 5.0, 6.0, 1.0) == 5.0);
    CHECK(distancia(6.0, 1.0, 3.0, 5.0) == 5.0);
}

TEST_CASE("Testando a prática 6: Menor distância encontrada dos pontos nos arrays")
{
    float vetorX[] = {3.0, 6.0, 1.0, 5.0};
    float vetorY[] = {5.0, 1.0, 2.0, 10.0};
    
    CHECK(minDist(4, vetorX, vetorY) == 5.0);
}