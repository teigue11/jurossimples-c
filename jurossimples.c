#include <stdio.h>

int calcular_juros(int capital, int taxa, int tempo);

void main(int argc, char *argv[]) {
    int c, i, t, resultado;
    
    printf("Digite o capital: ");
    scanf("%d", &c);
    printf("Digite a taxa (em porcentagem inteira, ex: 25): ");
    scanf("%d", &i);
    printf("Digite o tempo: ");
    scanf("%d", &t);
    
    resultado = calcular_juros(c, i, t);
    printf("O valor dos juros eh: %d\n", resultado);
    
    printf("Criado por Derick Ferreira Correa");
}