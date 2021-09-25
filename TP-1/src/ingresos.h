/*
 * ingresos.h
 *
 *  Created on: 24 sept 2021
 *      Author: operador
 */

#ifndef INGRESOS_H_
#define INGRESOS_H_

/// @brief Pide al usuario el ingreso de un número entero y lo devuelve por parámetro.
///
/// @param mensaje (Mensaje que sera mostrado al usuario pidiendole que ingrese el número entero)
/// @return (Devuelve el número entero)
int IngresarNumeroEntero(char mensaje[]);

/// @brief Pide al usuario el ingreso de un número flotante y lo devuelve por parámetro.
///
/// @param mensaje (Mensaje que sera mostrado al usuario pidiendole que ingrese el número flotante)
/// @return (Devuelve el número flotante)
float IngresarNumeroFlotante(char mensaje[]);

#endif /* INGRESOS_H_ */
