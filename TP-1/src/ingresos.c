/*
 * ingresos.c
 *
 *  Created on: 24 sept 2021
 *      Author: operador
 */
#include <stdio.h>
#include <stdlib.h>

int IngresarNumeroEntero(char mensaje[])
{
	int numero;

		printf("%s", mensaje);
		scanf("%d",&numero);

	return numero;
}

float IngresarNumeroFlotante(char mensaje[])
{
	float numero;

		printf("%s", mensaje);
		scanf("%f",&numero);

	return numero;
}
