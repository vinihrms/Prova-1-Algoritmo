/******************************************************************************

Nome do Programa: ler a nota de 0 a 100 e retornar o desempenho conforme a tabela
Questao: 9
Programador: Vinicius Almeida Hermes

*******************************************************************************/
#include <stdio.h>

int main() {
    int nota;
    
    scanf("%d", &nota);

    if (nota >= 0 && nota <= 20) { // >= <= intervalo fechado []
        printf("Péssimo\n");
    } else if (nota >= 21 && nota <= 40) {
        printf("Ruim\n");
    } else if (nota >= 41 && nota <= 60) {
        printf("Regular\n");
    } else if (nota >= 61 && nota <= 80) {
        printf("Bom\n");
    } else if (nota >= 81 && nota <= 100) {
        printf("Excelente\n");
    } else {
        printf("Nota inválida\n");
    }

    return 0;
}
