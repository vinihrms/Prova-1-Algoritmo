/******************************************************************************

Nome do Programa: dado um ano entre 1582 e 9999, informa se e bissexto ou comum
Questao: 8
Programador: Vinicius Almeida Hermes

*******************************************************************************/

#include <stdio.h>

int main() {
    int ano;
    scanf("%d", &ano);

    if (ano < 1582 || ano > 9999) { //limite de anos
        printf("Ano invalido.\n");
        return 1;
    }

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) { //parametos que definem o bissexto
        printf("Ano bissexto.\n");
    } else {
        printf("Ano comum.\n");
    }

    return 0;
}
