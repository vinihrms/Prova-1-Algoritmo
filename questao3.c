/******************************************************************************

Nome do Programa: inverte a ordem dos algarismos de uma entrada de 3 digitos
Questao: 3
Programador: Vinicius Almeida Hermes

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, centena, dezena, unidade;
    
    scanf("%d", &n); // restricoes: entrada unica
    
    unidade = n % 10;
    dezena = (n % 100) / 10;
    centena = n / 100;
        
    // restricoes: saida unica
    n = unidade * 100 + dezena * 10 + centena;
    printf("%d\n", n); 
    
    return 0;
}