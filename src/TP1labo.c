/*
 ============================================================================
 Name        : TP1labo.c
 Author      : Diego Maiorano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout,NULL);

	int kilometros;
	int kilometrosHarcodeados = 7090;
	int precioAerolineas;
	int precioAerolineasHarcodeados= 162965;
	int precioLatam;
	int precioLatamHarcodeados = 159339;
	float interes;
	float descuento;
	float precioBitcoin;
	float precioUnitario;
	float diferenciaPrecio;
	char opElegida;

	do{
	utn_getMenu(&opElegida,"Elija una opcion:\n 1)INGRESAR KILOMETROS\n 2)INGRESAR PRECIOS\n 3)CALCULAR COSTOS\n 4)INFORMAR COSTOS\n 5)MOSTRAR DATOS HARCODEADOS\n 6)SALIR\n"
				,"Elija una opcion valida.",'1','6',3);

	switch(opElegida)
		{
			case'1':
				utn_getNumero(&kilometros,"Ingrese los kilometros","Error, ingrese un valor valido.",0,5000000,2);
			break;
			case'2':
				utn_getNumero(&precioAerolineas,"Ingrese el precio de Aerolineas","Error, ingrese un valor valido.",0,5000000,2);

				utn_getNumero(&precioLatam,"Ingrese el precio de Latam","Error, ingrese un valor valido.",0,5000000,2);
			break;
			case'3':
				if(kilometros!=0 && precioAerolineas !=0 && precioLatam !=0){
					printf("Sus datos ya fueron calculados\n");

					utn_Interes(&precioAerolineas,&interes);

					utn_Interes(&precioLatam,&interes);

					utn_descuento(&precioAerolineas,&descuento);

					utn_descuento(&precioLatam,&descuento);

					utn_bitcoin(&precioAerolineas,&precioBitcoin);

					utn_bitcoin(&precioLatam,&precioBitcoin);

					utn_unitario(&precioAerolineas,&kilometros,&precioUnitario);

					utn_unitario(&precioLatam,&kilometros,&precioUnitario);

					utn_diferenciaPrecio(&precioLatam,&precioAerolineas,&diferenciaPrecio);
				}else
					printf("Tenes que ingresar kilometros y precios para poder calcularlos...");
			break;
			case'4':
				if(kilometros!=0 && precioAerolineas !=0 && precioLatam !=0){


			printf("cantidad de kilometros ingresados:%d\n",kilometros);

			printf("\nPrecio de Aerolineas:$%d\nPrecio con tarjeta de debito:$%3.f \nPrecio con tarjeta de credito:$%3.f\nPrecio pagando con bitcoin: $%f BTC\nPrecio Unitario $%.3f\n",precioAerolineas,descuento,interes,precioBitcoin,precioUnitario);

			printf("\nPrecio de latam:$%d\nPrecio con tarjeta de debito:$%3.f \nPrecio con tarjeta de credito:$%3.f\nPrecio pagando con bitcoin:$%f BTC\nPrecio Unitario $%.3f\n ",precioLatam,descuento,interes,precioBitcoin,precioUnitario);

			printf("\nla diferencia de precios de es:%.3f",diferenciaPrecio);

				}else
					printf("Tenes que ingresar kilometros y precios para poder informarlos...");
				break;
			case'5':




			utn_Interes(&precioAerolineasHarcodeados,&interes);

			utn_Interes(&precioLatamHarcodeados,&interes);

			utn_descuento(&precioAerolineasHarcodeados,&descuento);

			utn_descuento(&precioLatamHarcodeados,&descuento);

			utn_bitcoin(&precioAerolineasHarcodeados,&precioBitcoin);

			utn_bitcoin(&precioLatamHarcodeados,&precioBitcoin);

			utn_unitario(&precioAerolineasHarcodeados,&kilometros,&precioUnitario);

			utn_unitario(&precioLatamHarcodeados,&kilometrosHarcodeados,&precioUnitario);

			utn_diferenciaPrecio(&precioLatamHarcodeados,&precioAerolineasHarcodeados,&diferenciaPrecio);

			printf("cantidad de kilometros ingresados:%d\n",kilometrosHarcodeados);

			printf("\nPrecio de Aerolineas:$%d\nPrecio con tarjeta de debito:$%3.f \nPrecio con tarjeta de credito:$%3.f\nPrecio pagando con bitcoin: $%f BTC\nPrecio Unitario $%.3f\n",precioAerolineasHarcodeados,descuento,interes,precioBitcoin,precioUnitario);

			printf("\nPrecio de latam:$%d\nPrecio con tarjeta de debito:$%3.f \nPrecio con tarjeta de credito:$%3.f\nPrecio pagando con bitcoin:$%f BTC\nPrecio Unitario $%.3f\n ",precioLatamHarcodeados,descuento,interes,precioBitcoin,precioUnitario);

			printf("\nla diferencia de precios de es:%.3f",diferenciaPrecio);

			break;

			case 6:
			default:
			break;

		}

		}while (opElegida != 6);








	//informamos por consola los resultados



	
	return EXIT_SUCCESS;
}
