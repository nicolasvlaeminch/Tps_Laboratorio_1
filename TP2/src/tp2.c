/*
 ============================================================================
 Nicolas Vlaeminch Div K
 Parcial 1 - Parte 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libros.h"
#include "input.h"
#include "utn.h"
#include "validaciones.h"
#define CANTIDAD 5
#define LLENO 1
#define VACIO 0

int main(void) {
	setbuf(stdout, NULL);

	eJugador jugadores[CANTIDAD];
	int respuestaMenu;
	int opcion;

	//1
	int codigoIncremental = 0;

	//2
	int respuestaModificar;
	int opcionModificar;





	for(int i=0; i<CANTIDAD; i++)
	{
		jugadores[i].isEmpty = VACIO;
	}

	while (respuestaMenu != 5) {
		respuestaMenu = utn_getNumero(&opcion,
				"\n\tMenu principal\n\n"
				"1. ALTA DE JUGADOR\n"
				"2. BAJA DE JUGADOR\n"
				"3. MODIFICACION DE JUGADOR\n"
				"4. INFORMES\n"
				"5. SALIR"
				"\n\nIngrese una opcion: ", "\nERROR: numero invalido\n", 1, 5, 3);
		if(!respuestaMenu) {
			switch(opcion) {
			case 1:
				if(AltaJugador(jugadores, CANTIDAD, codigoIncremental) == 1) {
					printf("\nSe dio de alta correctamente\n\n");
					codigoIncremental++;
					system("pause");
				}
				else {
					printf("Lo siento la lista está llena\n");
					system("pause");
				}
				break;
			case 2:
				if (VerificarLleno(jugadores,CANTIDAD) == 1) {
					MostrarJugadores(jugadores, CANTIDAD);
					if (Baja(jugadores, CANTIDAD) == 1) {
						printf("\nDatos cargados con exito\n");
						system("pause");
					}
					else {
						printf("No se pudo dar de baja\n");
						system("pause");
					}
				}
				else {
					printf("Primero debe dar de Alta un libro\n");
					system("pause");
				}
				break;
			case 3:
				if (VerificarLleno(jugadores, CANTIDAD) == 1) {
					respuestaModificar = utn_getNumero(&opcionModificar,
									"\nQue desea modificar?\n\n"
									"1. NOMBRE\n"
									"2. POSICION\n"
									"3. N° CAMISETA\n"
									"4. SUELDO\n"
									"5. CONFEDERACION\n"
									"6. AÑOS DE CONTRATO"
									"\n\nIngrese una opcion: ", "\nERROR: numero invalido\n", 1, 6, 3);
					if(!respuestaModificar) {
						OrdenarImporteYTitulo(jugadores, CANTIDAD);
						MostrarJugadores(jugadores, CANTIDAD);
						if (ModificarJugador(jugadores, CANTIDAD, opcionModificar) == 1) {
							printf("Modoficacion realizada con exito\n");
							system("pause");
						}
						else {
							printf("No se pudo modificar\n");
							system("pause");
						}
					}
				}
				else {
					printf("Primero debe dar de Alta un libro\n");
					system("pause");
				}
				break;
			case 4:
				OrdenarDosCadenas(jugadores , CANTIDAD);
				ListarConfederacionJugador(jugadores, CANTIDAD);
				MostrarSalario(jugadores, CANTIDAD);
				ConfederacionMayorContratos(jugadores, CANTIDAD);
				break;
			case 5:
				printf("Salio del menu");
				respuestaMenu = 5;
				break;
			}
		}
	}
	return EXIT_SUCCESS;
}
