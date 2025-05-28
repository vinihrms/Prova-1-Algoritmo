/******************************************************************************

Nome do Programa: dada duas funcoes ordinarias com inteiros de ate 5 digitos, calcula a soma e o produto
Questao: 6
Programador: Vinicius Almeida Hermes

*******************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d/%d %d/%d", &a, &b, &c, &d);

    int somaNumerador = a * d + c * b;
    int somaDenominador = b * d;

    int produtoNumerador = a * c;
    int produtoDenominador = b * d;

    printf("%d/%d\n", somaNumerador, somaDenominador);
    printf("%d/%d\n", produtoNumerador, produtoDenominador);

    return 0;
}
