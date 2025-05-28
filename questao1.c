/******************************************************************************

Nome do Programa: soma de dois inteiros curtos sem sinal
Questao: 1
Programador: Vinicius Almeida Hermes

*******************************************************************************/

#include <stdio.h>

int main() {
    unsigned short a, b, s;

    scanf("%hu %hu", &a, &b);

    // restrição
    if (a < 10 && b < 10) {
        s = a + b;
        printf("%hu + %hu = %hu\n", a, b, s);
    } else {
        printf("Valores invalidos.\n");
    }

    return 0;
}