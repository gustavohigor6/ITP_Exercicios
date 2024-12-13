#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "praticas1.cpp"
#include <string>

TEST_CASE("Testando a prática 1: Classificação de triângulos.")
{
    CHECK(classifica_triangulos(10.5, 10.5, 10.5) == 0);
    CHECK(classifica_triangulos(3.2, 3.2, 4.1) == 1);
    CHECK(classifica_triangulos(5.0, 3.2, 3.2) == 1);
    CHECK(classifica_triangulos(3.2, 3.1, 3.2) == 1);
    CHECK(classifica_triangulos(3.2, 4.9, 4.1) == 2);
    CHECK(classifica_triangulos(5.0, 3.1, 2.0) == 2);
    CHECK(classifica_triangulos(4.7, 4.9, 13.0) == 3);
    CHECK(classifica_triangulos(-1.0, 3.2, 5.4) == 3);
    CHECK(classifica_triangulos(5.0, 3.1, 0) == 3);
    CHECK(classifica_triangulos(8.1, 3.1, 3.1) == 3);
    CHECK(classifica_triangulos(1.1, 4.5, 2.7) == 3);
}

TEST_CASE("Testando a prática 2: Movimentação da rainha no xadrez.")
{
    CHECK(xadrez("c2", "g6") == true);
    CHECK(xadrez("c2", "g7") == false);
    CHECK(xadrez("b5", "h5") == true);
    CHECK(xadrez("b5", "a3") == false);
    CHECK(xadrez("a1", "h8") == true);
    CHECK(xadrez("d7", "g4") == true);
    CHECK(xadrez("d7", "e5") == false);
    CHECK(xadrez("f2", "d2") == true);
    CHECK(xadrez("f2", "d1") == false);
    CHECK(xadrez("e8", "e2") == true);
}
