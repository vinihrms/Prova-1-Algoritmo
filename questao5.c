/******************************************************************************

Nome do Programa: le os segundos em um inteiro de 4 algarismos e converte para graus, minutos e segundos
Questao: 5
Programador: Vinicius Almeida Hermes

*******************************************************************************/


#include <stdio.h>

int main()
{
    int segundos, graus, minutos, resto;
    scanf("%d", &segundos);

    if (segundos < 0 || segundos > 9999) // entrada 4 dig
    {
        printf("Valor invalido\n");
        return 1; 

    } else{
        graus = segundos / 3600; //graus
        resto = segundos % 3600; //resto

        minutos = resto / 60; //minutos
        resto = resto % 60; //resto

    
        printf("%d grau(s), %d minuto(s) e %d segundo(s)\n", graus, minutos, resto);
    }

    return 0;
}