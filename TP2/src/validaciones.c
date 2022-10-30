/*
 * validaciones.c
 *
 *  Created on: 4 oct 2022
 *      Author: Nicolas
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"

/**
 * \fn int ValidarEntero(int, char[], int, int)
 * \brief
 *
 * \param numero
 * \param mensajeError
 * \param minimo
 * \param maximo
 * \return
 *
 * Esta funcion valida si un entero se encuentra dentro del rango
 * del minimo y maximo, de lo contrario mandara un mensaje de error
 * pidiendo que ingrese el entero nuevamente, una vez ingresado el
 * numero correctamente retornara el entero.
 */
int ValidarEntero(int numero, char mensajeError[], int minimo, int maximo) {

	fflush(stdin);
	while (numero < minimo || numero > maximo) {
		printf(mensajeError);
		scanf("%d",&numero);
	}
	return numero;
}

/**
 * \fn char ValidarCadena(int, int, char[], char[], char[])
 * \brief
 *
 * \param largoBuffer
 * \param len
 * \param mensaje
 * \param buffer
 * \param cadena
 * \return
 *
 * Esta funcion valida si una cadena supera el maximo de caracteres
 * si lo hace dara un mensaje de error y pedira nuevamente la cadena,
 * luego de ingresar correctamente los datos, la funcion retornara 1.
 */
char ValidarCadena(int largoBuffer, int len, char mensaje[], char buffer[], char cadena[]) {
	int retorno = 1;

	while (largoBuffer > len ) {
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%[^\n]",buffer);
		largoBuffer = (int)strlen(buffer);
		strcpy(cadena,buffer);
		retorno = 1;
	}

	return retorno;
}

