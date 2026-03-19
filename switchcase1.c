#include <stdio.h>

int main(){

    int num1, num2, operacao, soma, sub, mult, div;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-TODAS\nQual operacao voce quer usar?: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        printf("Soma = %d", soma);
        break;
        
    case 2:
        printf("Subtracao = %d", sub);
        break; 
        
    case 3:
        printf("Multiplicacao = %d", mult);
        break;   
        
    case 4:
        printf("Divisao = %d", div);
        break;
        
    case 5:
        printf("Soma = %d\n", soma);
        printf("Subtracao = %d\n", sub);
        printf("Multiplicacao = %d\n", mult);
        printf("Divisao = %d", div);
        break; 
    
    default:
        break;
    }

    return 0;

}