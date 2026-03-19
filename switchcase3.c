#include <stdio.h>

int main(){

    int num, operacao, dobro, triplo, quadrado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    dobro = num * 2;
    triplo = num * 3;
    quadrado = num * num;

    printf("1-Dobro\n2-Triplo\n3-Quadrado\n4-TODAS\nQual operacao voce quer usar?: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        printf("Dobro = %d", dobro);
        break;
        
    case 2:
        printf("Triplo = %d", triplo);
        break; 
        
    case 3:
        printf("Quadrado = %d", quadrado);
        break;   
        
    case 4:
        printf("Dobro = %d\n", dobro);
        printf("Triplo = %d\n", triplo);
        printf("Quadrado = %d\n", quadrado);
        break; 
    
    default:
        break;
    }

    return 0;

}