#include <stdio.h>

int calculo_de_juros(int capital, int taxa, int tempo)
{

    int juros = (capital * taxa * tempo) / 100;
    return juros;
}
