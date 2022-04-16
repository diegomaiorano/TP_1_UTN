/*
 * utn.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Diego Maiorano
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
/// @fn int utn_getNumero(int*, char*, char*, int, int, int)
/// @param numeroIngresado
/// @param pTexto
/// @param pTextoError
/// @param min
/// @param max
/// @param reintentos
/// @return
int utn_getNumero(int* numeroIngresado,char* pTexto,char* pTextoError,int min,int max,int reintentos)
{
	int retorno=-1;

for(int i=0;reintentos>=i;reintentos--)
{
	printf("%s\n",pTexto);

	if(scanf("%d",numeroIngresado)==1)
	{
		if(min <= max && (*numeroIngresado) >= min && (*numeroIngresado)<= max)
		{
		retorno=0;
		break;
		}
		else
		{
			printf("%s\n",pTextoError);
		}
	}
	else
	{
		printf("%s\n",pTextoError);
	}
}
	return retorno;
}
/// @fn float utn_Interes(int*, float*)
/// @param num1
/// @param resultado
/// @return
float utn_Interes(int*num1, float* resultado){

   *resultado=(float) *num1 * 25 / 100;
   *resultado=(float) *resultado + *num1;
	return 0;
}
/// @fn float utn_descuento(int*, float*)
/// @param num1
/// @param resultado
/// @return
float utn_descuento(int*num1, float* resultado){

   *resultado=(float) *num1 * 10 / 100;
   *resultado=(float) *num1 - *resultado  ;
	return 0;
}
/// @fn float utn_bitcoin(int*, float*)
/// @param num1
/// @param resultado
/// @return
float utn_bitcoin (int*num1, float*resultado){
	*resultado=(float)*num1 / 4606954;
	return 0;
}
/// @fn float utn_unitario(int*, int*, float*)
/// @param num1
/// @param num2
/// @param resultado
/// @return
float utn_unitario (int*num1,int*num2, float*resultado){
	*resultado= *num1 / *num2;
	return 0;
}
/// @fn float utn_diferenciaPrecio(int*, int*, float*)
/// @param num1
/// @param num2
/// @param resultado
/// @return
float utn_diferenciaPrecio(int*num1,int*num2, float*resultado){

	if(*num1>*num2){

	*resultado= *num1 - *num2;

	}else{
		*resultado= *num2 - *num1;
	}
return 0;

}
/// @fn int utn_getMenu(char*, char*, char*, char, char, int)
/// @param pOpcionElegida
/// @param pTexto
/// @param pTextoError
/// @param minimo
/// @param maximo
/// @param reintentos
/// @return
int utn_getMenu(char* pOpcionElegida,char*pTexto,char* pTextoError,char minimo,char maximo,int reintentos)
{
	int retorno= -1;

for(int i=0;reintentos>=i;reintentos--)
{
	printf("%s\n",pTexto);
	fflush(stdin);
	if(scanf("%c",pOpcionElegida)==1)
	{
		if(*pOpcionElegida >= minimo && *pOpcionElegida<=maximo)
		{
			retorno=0;
			break;
		}
		else
		{
			printf("%s\n",pTextoError);
		}
	}
	else
	{
		printf("%s\n",pTextoError);
	}
}
	return retorno;
}
