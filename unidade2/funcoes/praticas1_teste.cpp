#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "praticas1.cpp"

TEST_CASE("Busca de valor inteiro em um array de inteiros")
{
    int array1[] = {2, 4, 5, 1};
    int array2[] = {2, 4};
    int array3[] = { }; 
    CHECK(busca_array(5, 4, array1) == 2);
    CHECK(busca_array(3, 2, array2) == -1);
    CHECK(busca_array(5, 0, array3) == -1);
}