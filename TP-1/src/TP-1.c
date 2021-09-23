/*
 ============================================================================
 Name        : TP-1.c
 Author      : Daniel Galarza
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    setbuf(stdout,NULL);
    int opcion;
    int num_x;
    int num_y;
    int resultadoSuma;
    int resultadoResta;
    int resultadoProducto;
    float resultadoCociente;
    int resultadoFactorialDeA;
    int resultadoFactorialDeB;
    int flag;
    int flag1;

    flag=1;

	do
	{
	    switch(flag)
	    {
	        case 1:
	            printf("\nPor favor, elija la opci�n N�1 para empezar la carga:\n\n");
                printf("1. Ingresar 1er operando (A=x)\n");
                printf("2. Ingresar 2do operando (B=y)\n");
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");
                scanf("%d", &opcion);
                while(opcion>5||opcion<1)
                {
                    printf("\nUsted ha selecionado una opci�n invalida.\nPor favor elija una opci�n: ");
                    scanf("%d", &opcion);
                }
                flag=2;
                break;
	        case 2:
	            printf("Por favor, elija la opci�n N�2 para poder continuar:\n\n");
	            printf("1. Ingresar 1er operando (A=%d)\n", num_x);
                printf("2. Ingresar 2do operando (B=y)\n");
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");
                scanf("%d", &opcion);
                while(opcion>5||opcion<1)
                {
                    printf("\nUsted ha selecionado una opci�n invalida.\nPor favor elija una opci�n: ");
                    scanf("%d", &opcion);
                }
                flag=3;
                break;
            case 3:
                printf("\nPor favor, elija una opci�n:\n\n");
                printf("1. Ingresar 1er operando (A=%d)\n", num_x);
                printf("2. Ingresar 2do operando (B=%d)\n", num_y);
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");
                scanf("%d", &opcion);
                while(opcion>5||opcion<1)
                {
                    printf("\nUsted ha selecionado una opci�n invalida.\nPor favor elija una opci�n: ");
                    scanf("%d", &opcion);
                }
                break;
	    }

    	switch (opcion)
		{
			case 1:
				printf("\nUSted ha seleccionado la opci�n N�1. \nPor favor ingrese el primer operando: ");
				scanf("%d", &num_x);
				printf("El n�mero ingresado es A=%d.\n\n", num_x);
			    break;
			case 2:
				printf("\nUSted ha seleccionado la opci�n N�2. \nPor favor ingrese el segundo operando: ");
				scanf("%d", &num_y);
				printf("El n�mero ingresado es B=%d.\n\n", num_y);
			    break;
			case 3:
				printf("\nUsted ha seleccionado la opci�n N�3. \nCalcular todas las operaciones.\n\na) Calcular la suma (A+B).\nb) Calcular la resta (A-B).\nc) Calcular la division (A/B).\nd) Calcular la multiplicacion (A*B).\ne) Calcular el factorial (A!).\n\nPor favor elija la opci�n N�4 para conocer los resultados\n\n");
			    sumaDeEnteros( num_x, num_y, &resultadoSuma);
			    restaDeEnteros(num_x, num_y, &resultadoResta);
			    productoDeEnteros(num_x, num_y, &resultadoProducto);
			    flag1=cocienteDeEnteros(num_x, num_y, &resultadoCociente);
			    resultadoFactorialDeA=factorialDeEnteros(num_x);
			    resultadoFactorialDeB=factorialDeEnteros(num_y);
			    break;
			case 4:
			    printf("\nEl resultado de la suma es %d.\n", resultadoSuma);
			    printf("\nEl resultado de la resta es %d.\n", resultadoResta);
			    printf("\nEl resultado del producto de los dos n�meros es %d.\n", resultadoProducto);
			    if(flag1==1)
			    {
			        printf("\nEl resultado del cociente de los dos n�meros es %.2f.\n", resultadoCociente);
			    }
			    else
			    {
			        printf("\nNo es posible dividir por el n�mero cero\n");
			    }
			    printf("\nEl factorial de %d es: %d\n", num_x, resultadoFactorialDeA);
			    printf("\nEl factorial de %d es: %d\n", num_y, resultadoFactorialDeB);
		}
	} while (opcion != 5);

    return 0;
}



