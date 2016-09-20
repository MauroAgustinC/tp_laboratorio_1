#include <stdio.h>
#include "Carrizo.h"
/**
* \brief recibe dos datos y los suma.
* \param x e y son los enteros a sumar.
* \param sum devuelve el resultado de la suma.
* \return sin devolucion.
*/

float suma(float x, float y)
{
    float sum=x+y;
    printf("\nResultado de suma: %.2f\n\n",sum);
    return 0;
}

/**
* \brief recibe dos datos y los resta.
* \param x e y son los enteros a restar.
* \param res devuelve el resultado de la resta.
* \return sin devolucion.
*/

float resta(float x, float y)
{
    float res=x-y;
    printf("\nResultado de resta: %.2f\n\n",res);
    return 0;
}

/**
* \brief recibe dos datos, valida que no sean 0 y los divide.
* \param x e y son los enteros a dividir.
* \param if valida que no sea 0 ningun operando.
* \param div devuelve el resultado de la division.
* \return sin devolucion.
*/
float calcDivision(float x, float y)
{
    if(x==0||y==0)
    {
        printf("\nError en operandos ingresados. \n");
    }
    else
    {
        float div=x/y;
        printf("\nResultado de division: %.2f \n\n",div);
    }
    return 0;
}

/**
* \brief recibe dos datos y los multiplica.
* \param x e y son los enteros a multiplicar.
* \param mul devuelve el resultado de la multiplicacion.
* \return sin devolucion.
*/
float multiplicacion(float x, float y)
{
    float mul=x*y;
    printf("\nResultado de multiplicacion: %.2f \n\n",mul);
    return 0;
}

/**
* \brief recibe un dato y calcula su factorial
* \param x es el entero a factoriar.
* \param fact devuelve el resultado del factoreo.
* \param i se utiliza como contador.
* \return sin devolucion
*/
float factorial(float x)
{
    float fact=1;
    int i;
    for(i=1;i<=x;i++)
        {
            fact=fact*i;
        }
    printf("\nFalctorial del primer operando: %.2f \n\n",fact);
    return 0;
}

