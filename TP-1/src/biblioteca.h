/*
 * biblioteca.h
 *
 *  Created on: 23 sep. 2021
 *      Author: Notebook Daniel
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

/// @param numero1 (recibe como primer dato un n�mero entero.)
/// @param numero2 (recibe un segundo n�mero entero como dato.)
/// @param resultado (devuelve por referencia un n�mero entero como resultado de la suma de los mismos.)
void sumaDeEnteros(int numero1, int numero2, int* resultado);
/// @param numero1 (recibe como primer dato un n�mero entero.)
/// @param numero2 (recibe un segundo n�mero entero como dato.)
/// @param resultado (devuelve por referencia un n�mero entero como resultado de la resta de los mismos.)
void restaDeEnteros(int numero1, int numero2, int* resultado);
/// @param numero1 (recibe como primer dato un n�mero entero.)
/// @param numero2 (recibe un segundo n�mero entero como dato.)
/// @param resultado (devuelve por referencia un n�mero entero como resultado de la multiplicaci�n de los mismos.)
void productoDeEnteros(int numero1, int numero2, int* resultado);
/// @param numero1 (recibe como primer dato un n�mero entero.)
/// @param numero2 (recibe un segundo n�mero entero como dato.)
/// @param resultado (devuelve por referencia un n�mero flotante como resultado del cociente de los mismos.)
/// @return Devuelve "1" si se pudo realizar la operaci�n y "0" en el caso de no poder realizarla.
int cocienteDeEnteros(int numero1, int numero2, float* resultado);
/// @param numero (recibe un n�mero enterocomo primer dato.)
/// @return Devuelve el factorial del n�mero que recibe.
int factorialDeEnteros(int numero);

#endif /* BIBLIOTECA_H_ */
