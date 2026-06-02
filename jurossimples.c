#include <stdio.h>
#include "function_jurossimples.c"

int calculo_de_juros(int capital, int taxa, int tempo);

int main(int argc, char *argv[])
{
    int capital, t_juros, tempo, valor_final;

    printf("Digite o capital: ");
    scanf("%d", &capital);
    printf("Digite a taxa: (em porcentagem inteira, ex: 67): ");
    scanf("%d", &t_juros);
    printf("Digite o tempo: ");
    scanf("%d", &tempo);

    valor_final = calculo_de_juros(capital, t_juros, tempo);
    printf("O valor dos juros será: %d\n", valor_final);

    printf("Criado por Derick Ferreira Correa(https://github.com/TravaChipzzxk)");

    return 0;
}
