/*
 ============================================================================
 Name        : TP1.c
 Author      : Nicolas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "utn.h"
#include "operaciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int respuestaSalir = 0;
	int opcion;
	int respuesta;
/// 1
	int opcionMenuUno;
	int respuestaMenuUno;
	int costoTotalHospedaje = 0;
	int costoTotalComida = 0;
	int costoTotalTransporte = 0;
/// 2
	int numeroCamiseta;
	int opcionMenuDos;
	int respuestaMenuDos;
	int contadorJugadores = 0;
	int contadorArqueros = 0;
	int contadorDefensores = 0;
	int contadorMediocampistas = 0;
	int contadorDelanteros = 0;
	int opcionConfederacion;
	int respuestaConfederacion;
	int contadorUefa = 0;
	int contadorConmebol = 0;
	int contadorConcacaf = 0;
	int contadorAfc = 0;
	int contadorOfc = 0;
	int contadorCaf = 0;
/// 3
	float promedioUefa;
	float promedioConmebol;
	float promedioConcacaf;
	float promedioAfc;
	float promedioOfc;
	float promedioCaf;
	int banderaJugadores = 0;
///4
	int banderaResultados = 0;
	int costoTotalMantenimiento = 0;
	int aumentoUefa = 0;
	int costoTotalAumento = 0;

///									 MENU GENERAL 								///
	while (respuestaSalir == 0) {
		printf("\tMenu principal\n\n"
				"1. Ingreso de los costos de Mantenimiento"
				"\n Costo de Hospedaje -> $%d"
				"\n Costo de Comida -> $%d"
				"\n Costo de Transporte -> $%d\n"
				"2. Carga de jugadores\n Arqueros -> %d"
				"\n Defensores -> %d"
				"\n Mediocampistas -> %d"
				"\n Delanteros -> %d\n"
				"3. Realizar todos los calculos\n"
				"4. Informar todos los resultados\n"
				"5. Salir", costoTotalHospedaje, costoTotalComida, costoTotalTransporte, contadorArqueros,
				contadorDefensores, contadorMediocampistas, contadorDelanteros);
		respuesta = utn_getNumero(&opcion, "\n\nIngrese una opcion: ", "\nERROR: numero invalido\n", 1, 5, 3);
		if(!respuesta)
		{
			switch(opcion)
			{
///										PUNTO 1									///
			case 1:
				respuestaMenuUno = utn_getNumero(&opcionMenuUno,
						"\nIngrese el tipo de gasto:\n\n"
						"1. Costo de hospedaje\n"
						"2. Costo de comida\n"
						"3. Costo de transporte"
						"\n\nIngrese una opcion: ", "\nERROR: numero invalido\n", 1, 3, 3);
				if(!respuestaMenuUno) {
					switch(opcionMenuUno) {
					case 1:
						costoTotalHospedaje = SumatoriaEntero("\nIngrese el costo del hospedaje en pesos: ", "\nIngrese un numero mayor a 0: ", costoTotalHospedaje);
						break;
					case 2:
						costoTotalComida = SumatoriaEntero("\nIngrese el costo de la comida en pesos: ", "\nIngrese un numero mayor a 0: ", costoTotalComida);
						break;
					case 3:
						costoTotalTransporte = SumatoriaEntero("\nIngrese el costo del transporte en pesos: ", "\nIngrese un numero mayor a 0: ", costoTotalTransporte);
						break;
					}
				}
				break;
			case 2:
///										PUNTO 2									///
				if (contadorJugadores < 22) {
					printf("\nIngrese numero de camiseta: ");
					scanf("%d", &numeroCamiseta);
					respuestaMenuDos = utn_getNumero(&opcionMenuDos,
							"\nIngrese la posicion:\n\n"
							"1. Arqueros\n"
							"2. Defensores\n"
							"3. Mediocampistas\n"
							"4. Delanteros"
							"\n\nIngrese una opcion: ", "\nERROR: numero invalido\n", 1, 4, 3);
					if(!respuestaMenuDos) {
						switch(opcionMenuDos) {
						case 1:
							if (contadorArqueros < 2) {
								contadorArqueros++;
								contadorJugadores++;
								respuestaConfederacion = utn_getNumero(&opcionConfederacion,
										"\nIngrese una Confederacion:\n\n"
										"1. Uefa\n"
										"2. Conmebol\n"
										"3. Concacaf\n"
										"4. Afc\n"
										"5. Ofc\n"
										"6. Caf\n\n"
										"Ingrese una opcion: ",
										"\nERROR: numero invalido\n", 1, 6, 3);
								if(!respuestaConfederacion) {
									SumarEnteroSeleccionado(&opcionConfederacion, &contadorUefa, &contadorConmebol,
											&contadorConcacaf, &contadorAfc, &contadorOfc, &contadorCaf);
								}
								banderaJugadores = 1;
							}
							else {
								printf("\nERROR: Ya no puedes agregar mas arqueros, supero el maximo que es 2\n\n");
								system("pause");
							}
							break;
						case 2:
							if (contadorDefensores < 8) {
								contadorDefensores++;
								contadorJugadores++;
								respuestaConfederacion = utn_getNumero(&opcionConfederacion,
										"\nIngrese una Confederacion:\n\n"
										"1. Uefa\n"
										"2. Conmebol\n"
										"3. Concacaf\n"
										"4. Afc\n"
										"5. Ofc\n"
										"6. Caf\n\n"
										"Ingrese una opcion: ",
										"\nERROR: numero invalido\n", 1, 6, 3);
								if(!respuestaConfederacion) {
									SumarEnteroSeleccionado(&opcionConfederacion, &contadorUefa, &contadorConmebol,
											&contadorConcacaf, &contadorAfc, &contadorOfc, &contadorCaf);
								}
								banderaJugadores = 1;
							}
							else {
								printf("\nERROR: Ya no puedes agregar mas defensores, supero el maximo que es 8\n\n");
								system("pause");
							}
							break;
						case 3:
							if (contadorMediocampistas < 8) {
								contadorMediocampistas++;
								contadorJugadores++;
								respuestaConfederacion = utn_getNumero(&opcionConfederacion,
										"\nIngrese una Confederacion:\n\n"
										"1. Uefa\n"
										"2. Conmebol\n"
										"3. Concacaf\n"
										"4. Afc\n"
										"5. Ofc\n"
										"6. Caf\n\n"
										"Ingrese una opcion: ",
										"\nERROR: numero invalido\n", 1, 6, 3);
								if(!respuestaConfederacion) {
									SumarEnteroSeleccionado(&opcionConfederacion, &contadorUefa, &contadorConmebol,
											&contadorConcacaf, &contadorAfc, &contadorOfc, &contadorCaf);
								}
								banderaJugadores = 1;
							}
							else {
								printf("\nERROR: Ya no puedes agregar mas mediocampistas, supero el maximo que es 8\n\n");
								system("pause");
							}
							break;
						case 4:
							if (contadorDelanteros < 4) {
								contadorDelanteros++;
								contadorJugadores++;
								respuestaConfederacion = utn_getNumero(&opcionConfederacion,
										"\nIngrese una Confederacion:\n\n"
										"1. Uefa\n"
										"2. Conmebol\n"
										"3. Concacaf\n"
										"4. Afc\n"
										"5. Ofc\n"
										"6. Caf\n\n"
										"Ingrese una opcion: ",
										"\nERROR: numero invalido\n", 1, 6, 3);
								if(!respuestaConfederacion) {
									SumarEnteroSeleccionado(&opcionConfederacion, &contadorUefa, &contadorConmebol,
											&contadorConcacaf, &contadorAfc, &contadorOfc, &contadorCaf);
								}
								banderaJugadores = 1;
							}
							else {
								printf("\nERROR: Ya no puedes agregar mas delanteros, supero el maximo que es 4\n\n");
								system("pause");
							}
							break;
						}
					}
				}
				else {
					printf("ERROR: Ya ingreso el maximo de jugadores\n");
					system("pause");
				}
				break;
			case 3:
///										PUNTO 3									///
				if (costoTotalHospedaje != 0 && costoTotalComida != 0 && costoTotalTransporte != 0 && banderaJugadores == 1) {
					promedioUefa = Promedio(contadorUefa, contadorJugadores);
					promedioConmebol = Promedio(contadorConmebol, contadorJugadores);
					promedioConcacaf = Promedio(contadorConcacaf, contadorJugadores);
					promedioAfc = Promedio(contadorAfc, contadorJugadores);
					promedioOfc = Promedio(contadorOfc, contadorJugadores);
					promedioCaf = Promedio(contadorCaf, contadorJugadores);
					costoTotalMantenimiento = costoTotalComida + costoTotalHospedaje + costoTotalTransporte;
					banderaResultados = 1;
					if (contadorUefa > contadorConmebol && contadorUefa > contadorConcacaf && contadorUefa > contadorAfc &&
							contadorUefa > contadorOfc && contadorUefa > contadorCaf) {
						aumentoUefa = (costoTotalMantenimiento / 100) * 35;
						costoTotalAumento = costoTotalMantenimiento + aumentoUefa;
					}
					printf("\nCalculos realizados con exito\n");
					system("pause");
				}
				else {
					printf("\nERROR: Primero debes ingresar datos en la opcion 1 y 2\n");
					system("pause");
				}
				break;
			case 4:
///										PUNTO 4									///
				if (banderaResultados == 1) {
					printf("\nInformar todos los resultados\n\n"
							"Promedio Uefa: %.2f\n"
							"Promedio Conmebol: %.2f\n"
							"Promedio Concacaf: %.2f\n"
							"Promedio Afc: %.2f\n"
							"Promedio Ofc: %.2f\n"
							"Promedio Caf: %.2f\n\n"
							"El costo del mantenimiento es %d", promedioUefa, promedioConmebol, promedioConcacaf, promedioAfc,
							promedioOfc, promedioCaf, costoTotalMantenimiento);
					if (contadorUefa > contadorConmebol && contadorUefa > contadorConcacaf && contadorUefa > contadorAfc &&
							contadorUefa > contadorOfc && contadorUefa > contadorCaf) {
						printf(" y recibio un aumento de %d, su valor total es de: %d\n", aumentoUefa, costoTotalAumento);
					}
					else {
						printf(" y no hubo aumento\n");
					}
					system("pause");
				}
				else {
					printf("\nERROR: Primero debes realizar todos los calculos con la opciones 3\n");
					system("pause");
				}
				break;
			case 5:
///										PUNTO 5									///
				respuestaSalir = 5;
				printf("Salio del menu");
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}

