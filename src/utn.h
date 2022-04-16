/*
 * utn.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Diego Maiorano
 */

#ifndef UTN_H_
#define UTN_H_
#include "utn.h"

int utn_getNumero(int* numeroIngresado,char* pTexto,char* pTextoError,int min,int max,int reintentos);

float utn_Interes(int*num1,float* resultado);

float utn_descuento(int*num1, float* resultado);

float utn_bitcoin (int*num1, float*resultado);

float utn_unitario (int*num1,int*num2, float*resultado);

float utn_diferenciaPrecio(int*num1,int*num2, float*resultado);

int utn_getMenu(char* pOpcionElegida,char*pTexto,char* pTextoError,char minimo,char maximo,int reintentos);

#endif /* UTN_H_ */
