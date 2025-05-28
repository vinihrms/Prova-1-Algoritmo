/******************************************************************************

Nome do Programa: le um numero binário de 5 dígitos e converte para decimal
Questao: 7
Programador: Vinicius Almeida Hermes

*******************************************************************************/

#include <stdio.h>

int main() {
    int binario, decimal = 0, base = 1, a;

    scanf("%d", &binario);

    // último dígito (0 ou 1)
    // soma ao decimal, multiplicado pela base
    // dobra a base (0, 1, 2, 4, 8, 16, ...)
    // remove o último dígito do número binário pq ja foi calculado

    a = binario % 10;         
    decimal += a * base;      
    base *= 2;                
    binario /= 10;            

    a = binario % 10;
    decimal += a * base;
    base *= 2;
    binario /= 10;

    a = binario % 10;
    decimal += a * base;
    base *= 2;
    binario /= 10;

    a = binario % 10;
    decimal += a * base;
    base *= 2;
    binario /= 10;

    // esse com laco FOR ficava mais bonito :(

    a = binario % 10;
    decimal += a * base;

    printf("%d\n", decimal);
    return 0;
}