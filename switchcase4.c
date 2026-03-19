#include <stdio.h>

int main(){

    int  converter;
    float metros, quilogramas, horas;

    printf("1-Converter metros para centimetros\n2-Converter quilogramas para gramas\n3-Converter horas para minutos\nO que voce quer converter?: ");
    scanf("%d", &converter);

    switch (converter)
    {
    case 1:

    printf("Insira o valor de metros: ");
    scanf("%f", &metros);
        
        printf("%.2f centimetros", metros * 100);
        break;
        
    case 2:

    printf("Insira o valor de quilogramas: ");
    scanf("%f", &quilogramas);
        
        printf("%.2f gramas", quilogramas * 1000);
        break;
        
    case 3:

    printf("Insira o valor de horas: ");
    scanf("%f", &horas);
        
        printf("%.2f minutos", horas * 60);
        break; 
    
    default:
        break;
    }

    return 0;

}