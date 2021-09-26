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
#include "ingresos.h"

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
    int flagCociente;


    flag=1;

	do
	{
	    switch(flag)
	    {
	        case 1:
	            printf("\nPor favor, elija la opción Nº1 para empezar la carga:\n\n");
                printf("1. Ingresar 1er operando (A=x)\n");
                printf("2. Ingresar 2do operando (B=y)\n");
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");
                scanf("%d", &opcion);
                while(opcion!=5 && opcion!=1)
                {
                    printf("\nUsted ha selecionado una opción invalida.\nPor favor elija la opción Nº1, "
                    		"o ingrese la opcion Nº5 si desea salir ");
                    scanf("%d", &opcion);
                }
                flag=2;
                break;
	        case 2:
	            printf("Por favor, elija la opción Nº2 para poder continuar:\n\n");
	            printf("1. Ingresar 1er operando (A=%d)\n", num_x);
                printf("2. Ingresar 2do operando (B=y)\n");
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");
                scanf("%d", &opcion);
                while(opcion!=5 && opcion!=2)
                {
                    printf("\nUsted ha selecionado una opción invalida.\nPor favor elija la opción Nº2, "
                    		"o ingrese la opcion Nº5 si desea salir ");
                    scanf("%d", &opcion);
                }
                flag=3;
                break;
            case 3:
                printf("\nPor favor, elija una opción Nº3 para poder continuar:\n\n");
                printf("1. Ingresar 1er operando (A=%d)\n", num_x);
                printf("2. Ingresar 2do operando (B=%d)\n", num_y);
                printf("3. Calcular todas las operaciones\n");
                printf("4. Informar resultados\n");
                printf("5. Salir\n");
                scanf("%d", &opcion);
                while(opcion!=5 && opcion!=3)
                {
                    printf("\nUsted ha selecionado una opción invalida.\nPor favor elija "
                    		"la opción Nº3, o ingrese la opcion Nº5 si desea salir ");
                    scanf("%d", &opcion);
                }
                flag=4;
                break;
            case 4:
            	printf("\nPor favor, elija una opción Nº4 para poder continuar:\n\n");
            	printf("1. Ingresar 1er operando (A=%d)\n", num_x);
            	printf("2. Ingresar 2do operando (B=%d)\n", num_y);
            	printf("3. Calcular todas las operaciones\n");
            	printf("4. Informar resultados\n");
            	printf("5. Salir\n");
            	scanf("%d", &opcion);
            	while(opcion!=5 && opcion!=4)
                {
            	printf("\nUsted ha selecionado una opción invalida.\nPor favor "
            			"elija la opción Nº4, o ingrese la opcion Nº5 si desea salir ");
            	scanf("%d", &opcion);
            	}
            	flag=5;
            	break;
            case 5:
            	printf("\nPor favor elija la opción Nº1 para volver a comenzar, o ingrese la "
            			"opcion Nº5 si desea salir: \n");
            	printf("1. Ingresar 1er operando (A=%d)\n", num_x);
            	printf("2. Ingresar 2do operando (B=%d)\n", num_y);
            	printf("3. Calcular todas las operaciones\n");
            	printf("4. Informar resultados\n");
            	printf("5. Salir\n");
            	scanf("%d", &opcion);
            	while(opcion!=5 && opcion!=1)
            	{
            	printf("\nUsted ha selecionado una opción invalida.\nPor favor elija la opción Nº1 "
            			"para volver a comenzar, o ingrese la opcion Nº5 si desea salir: \n");
            	scanf("%d", &opcion);
            	}
            	flag=1;
            	break;
	    }

    	switch (opcion)
		{
			case 1:
				num_x = IngresarNumeroEntero("\nUsted ha seleccionado la opción Nº1. \n"
						"Por favor ingrese el primer operando: ");
				printf("El número ingresado es A=%d.\n\n", num_x);
			    break;
			case 2:
				num_y = IngresarNumeroEntero("\nUsted ha seleccionado la opción Nº2. \n"
						"Por favor ingrese el segundo operando: ");
				printf("El número ingresado es B=%d.\n\n", num_y);
			    break;
			case 3:
				printf("\nUsted ha seleccionado la opción Nº3. \nCalcular todas las operaciones.\n\na) "
						"Calcular la suma (A+B).\nb) Calcular la resta (A-B).\nc) Calcular la division (A/B).\nd) "
						"Calcular la multiplicacion (A*B).\ne) Calcular el factorial (A!).\n");
			    sumaDeEnteros( num_x, num_y, &resultadoSuma);
			    restaDeEnteros(num_x, num_y, &resultadoResta);
			    flagCociente=cocienteDeEnteros(num_x, num_y, &resultadoCociente);
			    productoDeEnteros(num_x, num_y, &resultadoProducto);
			    factorialDeEnteros(num_x, &resultadoFactorialDeA);
			    factorialDeEnteros(num_y, &resultadoFactorialDeB);
			    break;
			case 4:
			    printf("\nEl resultado A+B es %d.\n", resultadoSuma);
			    printf("\nEl resultado de A-B es %d.\n", resultadoResta);
			    if(flagCociente==1)
			    {
			        printf("\nEl resultado de A/B es %.2f.\n", resultadoCociente);
			    }
			    else
			    {
			        printf("\nNo es posible dividir por cero\n");
			    }
			    printf("\nEl resultado de A*B es %d.\n", resultadoProducto);

			    if(factorialDeEnteros(num_x, &resultadoFactorialDeA)==1)
			    {
			    	printf("\nEl factorial de A es: %d\n", resultadoFactorialDeA);
			    }
			    else
			    {
			    	printf("\nNo se puede realizar el factorial de A por ser un número negativo\n");
			    }
			    if(factorialDeEnteros(num_y, &resultadoFactorialDeB)==1)
			    {
			    printf("\nEl factorial de B es: %d", resultadoFactorialDeB);
			    }
			    else
			    {
			    printf("\nNo se puede realizar el factorial de B por ser un número negativo\n");
			    }

		}
	} while (opcion != 5);
	printf("Programa finalizado.");
    return 0;
}




