#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "pratica.cpp"

TEST_CASE("Testando a função strlen")
{
    CHECK(strlen("Gustavo") == 7);
    CHECK(strlen("Marcia") == 6);
    CHECK(strlen("Higor") == 5);
    CHECK(strlen("Ana") == 3);
    CHECK(strlen("Francisca") == 9);
    CHECK(strlen("") == 0);
}
/* Deu erro por se tratar de uma função do tipo VOID
TEST_CASE("Testando a função UPPER")
{
    CHECK(upper("gustavo") == "GUSTAVO");
    CHECK(upper("MaRcia") == "MARCIA");
    CHECK(upper("teste") == "TESTE");
}*/

TEST_CASE("Testando a função busca")
{
    CHECK(busca("Gustavo", "avo") == "avo");
}
