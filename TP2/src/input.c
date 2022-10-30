/*
 * input.c
 *
 *  Created on: 1 oct 2022
 *      Author: Nicolas
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "validaciones.h"

/**
 * \fn int PedirEntero(char[], char[], int, int)
 * \brief
 *
 * \param mensaje
 * \param mensajeError
 * \param min
 * \param max
 * \return
 *
 * Esta funcion pide un numero dentro del rango min y max,
 * esto lo verifica la funcion VerificarEntero, retornando
 * la variable numero.
 */
int PedirEntero(char mensaje[], char mensajeError[], int min, int max)
{
	int numero;

	printf("%s",mensaje);
	scanf("%d",&numero);
	numero = ValidarEntero(numero, mensajeError, min, max);

	return numero;
}

/**
 * \fn int PedirCadena(char[], int, char[])
 * \brief
 *
 * \param cadena
 * \param len
 * \param mensaje
 * \return
 *
 * Esta funcion pide una cadena de texto que no supere el
 * maximo de caracteres definido, esto se verifica con la
 * funcion ValidarCadena, una vez ingresada la cadena
 * correctamente se guardara y retorna 1, de lo contrario
 * retornara 0.
 */
int PedirCadena(char cadena[],int len,char mensaje[])
{
	int retorno;
	char buffer[1024];
	int largoBuffer;

	retorno = 0;

	printf("%s",mensaje);
	fflush(stdin);
	scanf("%[^\n]",buffer);
	largoBuffer = (int)strlen(buffer);

	if(len > largoBuffer )
	{
		strcpy(cadena,buffer);
		retorno = 1;
	}
	else {
		retorno = ValidarCadena(largoBuffer, len, "ERROR", buffer, cadena);
	}

	return retorno;
}

