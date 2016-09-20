#include <stdio.h>
#include <stdlib.h>
#include "Carrizo.h"

int main()
{
    float num1=0, num2=0;
    int opcion=0;
    while(1)
    {
        system("cls");
        printf(" |=====================================|\n");
        printf(" || 1 | Ingresar 1er operando         ||\n");
        printf(" || 2 | Ingresar 2do operando         ||\n");
        printf(" || 3 | Calcular la suma              ||\n");
        printf(" || 4 | Calcular la resta             ||\n");
        printf(" || 5 | Calcular la division          ||\n");
        printf(" || 6 | Calcular la multiplicacion    ||\n");
        printf(" || 7 | Calcular el factorial         ||\n");
        printf(" || 8 | Calcular todas las operaciones||\n");
        printf(" || 9 | Salir                         ||\n");
        printf(" |=====================================|\n");
        printf("\n |Primer operando:%.2f || Segundo operando:%.2f|\n\n",num1,num2);
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando: \n");
                scanf("%f",&num1);
                printf("Primer operando: %.2f\n", num1);
                system("pause");
                break;
            case 2:
                printf("Ingrese el segundo operando: \n");
                scanf("%f",&num2);
                printf("Segundo operando: %.2f\n", num2);
                system("pause");
                break;
            case 3:
                suma(num1,num2);
                system("pause");
                break;
            case 4:
                resta(num1,num2);
                system("pause");
                break;
            case 5:
                calcDivision(num1,num2);
                system("pause");
                break;
            case 6:
                multiplicacion(num1,num2);
                system("pause");
                break;
            case 7:
                factorial(num1);
                system("pause");
                break;
            case 8:
                suma(num1,num2);
                resta(num1,num2);
                calcDivision(num1,num2);
                multiplicacion(num1,num2);
                factorial(num1);
                system("pause");
                break;
            case 9:
                return 0;
                break;
        }
    }
return 0;
}
