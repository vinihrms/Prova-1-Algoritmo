/******************************************************************************

Nome do Programa: retornar o ultimo digito da entrada de ate dois numeros
Questao: 2
Programador: Vinicius Almeida Hermes

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, v;
    
    scanf("%d", &n);
    
    //restricao
    if(n < -99 || n > 99){
        printf("Apenas numeros de -99 a 99.\n");
    } else {
        
        v = n % 10;
        
        // pra deixar o valor de v sem o sinal negativo. exemplo: entrada -15 saida ser 5 ao inves de -5
        if ( v < 0){
            v = v + (-2 * v);
        }
        
        printf("O ultimo digito de %d eh %d.\n", n ,v);
    }

}