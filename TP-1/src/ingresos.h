/*
 * ingresos.h
 *
 *  Created on: 24 sept 2021
 *      Author: operador
 */

#ifndef INGRESOS_H_
#define INGRESOS_H_

/// @brief Pide al usuario el ingreso de un n�mero entero y lo devuelve por par�metro.
///
/// @param mensaje (Mensaje que sera mostrado al usuario pidiendole que ingrese el n�mero entero)
/// @return (Devuelve el n�mero entero)
int IngresarNumeroEntero(char mensaje[]);

/// @brief Pide al usuario el ingreso de un n�mero flotante y lo devuelve por par�metro.
///
/// @param mensaje (Mensaje que sera mostrado al usuario pidiendole que ingrese el n�mero flotante)
/// @return (Devuelve el n�mero flotante)
float IngresarNumeroFlotante(char mensaje[]);

#endif /* INGRESOS_H_ */
