/*
 * biblioteca.h
 *
 *  Created on: 23 sep. 2021
 *      Author: Notebook Daniel
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

/// @param numero1 (recibe como primer dato un número entero.)
/// @param numero2 (recibe un segundo número entero como dato.)
/// @param resultado (devuelve por referencia un número entero como resultado de la suma de los mismos.)
void sumaDeEnteros(int numero1, int numero2, int* resultado);
/// @param numero1 (recibe como primer dato un número entero.)
/// @param numero2 (recibe un segundo número entero como dato.)
/// @param resultado (devuelve por referencia un número entero como resultado de la resta de los mismos.)
void restaDeEnteros(int numero1, int numero2, int* resultado);
/// @param numero1 (recibe como primer dato un número entero.)
/// @param numero2 (recibe un segundo número entero como dato.)
/// @param resultado (devuelve por referencia un número entero como resultado de la multiplicación de los mismos.)
void productoDeEnteros(int numero1, int numero2, int* resultado);
/// @param numero1 (recibe como primer dato un número entero.)
/// @param numero2 (recibe un segundo número entero como dato.)
/// @param resultado (devuelve por referencia un número flotante como resultado del cociente de los mismos.)
/// @return Devuelve "1" si se pudo realizar la operación y "0" en el caso de no poder realizarla.
int cocienteDeEnteros(int numero1, int numero2, float* resultado);
/// @brief Realiza el cálculo del factorial del número ingresado.
///
/// @param numero (recibe como dato un número entero.)
/// @param factorial (devuelve por referencia el factorial del número recibido)
/// @return Retorna 1 si fue posible el cálculo y de lo contrario retorna 0.
int factorialDeEnteros(int numero, int* factorial);

#endif /* BIBLIOTECA_H_ */
