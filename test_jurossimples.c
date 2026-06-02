#include <stdio.h>
#include "function_jurossimples.c"

int calculo_de_juros(int capital, int taxa, int tempo);

int main()
{

    printf("Teste 1: %d (Esperado: 50)\n", calculo_de_juros(100, 50, 10));

    printf("Teste 2: %d (Esperado: 75)\n", calculo_de_juros(100, 25, 12));

    printf("Teste 3: %d (Esperado: 375)\n", calculo_de_juros(100, 75, 5));

    printf("Criado por Derick ferreira Correa (https://github.com/TravaChipzzxk)");

    return 0;
}
