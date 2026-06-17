#include <stdio.h>
#include <assert.h>
#include "function_jurossimples.c"

int calculo_de_juros(int capital, int taxa, int tempo);

int main()
{
    assert(calculo_de_juros(100, 50, 10) == 500);
    assert(calculo_de_juros(100, 25, 12) == 300);
    assert(calculo_de_juros(100, 75, 5) == 375);

    printf("Todos os testes passaram com sucesso!\n");
    printf("Criado por Derick Ferreira Correa\n");

    return 0;
}
