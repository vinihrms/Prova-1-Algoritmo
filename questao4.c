/******************************************************************************

Nome do Programa: le um numero de 3 algarismos e calcula o quarto dígito segundo a regra
Questao: 4
Programador: Vinicius Almeida Hermes

*******************************************************************************/

#include <stdio.h>

int main() {
    int num, centena, dezena, unidade, digito4;

    scanf("%d", &num);

    
    if (num < 0 || num > 999) {
        printf("Número inválido.\n");
        return 1;
    }

    centena = (num / 100) % 10; 
    dezena = (num / 10) % 10;       
    unidade = num % 10;              

    digito4 = (centena + dezena * 3 + unidade * 5) % 7;

    printf("%d%d%d%d\n", centena, dezena, unidade, digito4);

    return 0;
}