#include <stdio.h>

int calcular_juros(int capital, int taxa, int tempo);

int main() {
    // J = 100 * 0.5 * 10 -> taxa 50
    printf("Teste 1: %d (Esperado: 50)\n", calcular_juros(100, 50, 10));
    // J = 100 * 0.25 * 12 -> taxa 25
    printf("Teste 2: %d (Esperado: 75)\n", calcular_juros(100, 25, 12));
    // J = 100 * 0.75 * 5 -> taxa 75
    printf("Teste 3: %d (Esperado: 375)\n", calcular_juros(100, 75, 5));
    
    printf("Criado por Derick Ferreira Correa");
    return 0;
}