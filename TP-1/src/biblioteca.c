/*
 * biblioteca.c
 *
 *  Created on: 23 sep. 2021
 *      Author: Notebook Daniel
 */



void sumaDeEnteros(int numero1, int numero2, int* resultado)
{
    int result;
    result=numero1+numero2;
    *resultado= result;
}

void restaDeEnteros(int numero1, int numero2, int* resultado)
{
    int result;
    result=numero1-numero2;
    *resultado= result;
}

void productoDeEnteros(int numero1, int numero2, int* resultado)
{
    int result;
    result=numero1*numero2;
    *resultado=result;
}

int cocienteDeEnteros(int numero1, int numero2, float* resultado)
{
    float result;
    int flag;
    flag=1;
    if(numero2!=0)
    {
        result=(float)numero1/numero2;
        *resultado=result;
    }
    else
    {
        flag=0;
    }
    return flag;
}

int factorialDeEnteros(int numero, int* factorial)
{

    int aux;
    int i;
    aux=1;

    if(numero>=0)
    {
    	for(i=1; i<=numero;i++)
    	    {
    	        aux=aux*i;
    	    }
    	*factorial=aux;
    	return 1;
    }
    else
    {
    	return 0;
    }
}

