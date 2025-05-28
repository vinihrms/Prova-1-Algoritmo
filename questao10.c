/******************************************************************************

Nome do Programa: ler uma operação matemática e retornar o resultado com switch
Questao: 10
Programador: Vinicius Almeida Hermes

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    int p, q, resultado;
    char op;

    scanf("%d %c %d", &p, &op, &q);

    switch (op) {
        case '+':
            resultado = p + q;
            break;
        case '*':
            resultado = p * q;
            break;
        case '-':
            resultado = p - q;
            break;
        case '/':
            if (q != 0) {
                resultado = p / q;
            } else {
                printf("Divisão por zero e invalida.\n");
                return 1; 
            }
            break;
        case '%':
            if (q != 0) {
                resultado = p % q;
            } else {
                printf("Divisão por zero e invalida.\n");
                return 1; 
            }
            break;
        case '^':
            resultado = (int)pow(p, q);
            break;
        default:
            resultado = 0;
            break;
    }

    printf("%d %c %d = %d\n", p, op, q, resultado);


    return 0;
}