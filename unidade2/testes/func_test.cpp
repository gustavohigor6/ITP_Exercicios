#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "func.cpp"

TEST_CASE("Testando se o número é par || 0 = par & 1 = ímpar")
{
    CHECK(par(1) == 1);
    CHECK(par(2) == 0);
    CHECK(par(0) == 0);
    CHECK(par(19) == 1);
    CHECK(par(-4) == 0);
    CHECK(par(-19) == 1);
}