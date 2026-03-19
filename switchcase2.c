#include <stdio.h>

int main(){

int mes;

    printf("Insira o numero de um mes do ano (1 a 12): ");
    scanf("%d", &mes);

switch (mes)
{
    case 1:
    case 2:

    case 3:
    printf("Primeiro Trimestre");
    break;

    case 4:
    case 5:
    
    case 6:
    printf("Segundo Trimestre");
    break;

    case 7:
    case 8:
    
    case 9:
    printf("Terceiro Trimestre");
    break;

    case 10:
    case 11:

    case 12:
    printf("Quarto Trimestre");
    break;

default:
    printf("Mes Invalido");

}
}