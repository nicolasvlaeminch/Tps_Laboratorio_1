/*
 * utn.c
 *
 *  Created on: 17 sept 2022
 *      Author: Nicolas
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/**
 * \fn int utn_getNumero(int*, char*, char*, int, int, int)
 * \brief
 *
 * \param pResultado
 * \param mensaje
 * \param mensajeError
 * \param minimo
 * \param maximo
 * \param reintentos
 * \return
 *
 * Funcion es usada para pedir un entero y guardarla en una variable.
 * Se le pasa como parametro el puntero donde se guardara el entero, en mensaje se ingresa la cadena
 * que se le mostrara al usuario, en mensajeError se ingresa la cadena que se le enviara al usuario si los datos
 * ingresados superan el minimo o el maximo de los parametros ingresados, y en la variable reintentos se le pasara la
 * cantidad de reintentos que tendra el usuario al fallar por ingresar un numero mayor o inferior al minimo y maximo.
 * Si el usuario se queda sin intentos la funcion retornara -1 y si ingresa correctamente un numero la funcion
 * retornara 0.
 */
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos) {
	int ret;
	int num;

	while(reintentos>0)
	{
		printf(mensaje);
		if(scanf("%d",&num)==1)
		{
			if(num<=maximo && num>=minimo)
				break;
		}
		fflush(stdin); //EN LINUX UTILIZAR __fpurge(stdin)
		reintentos--;
		printf(mensajeError);
		if (reintentos == 0) {
			printf("\nYa no tienes intentos\n");
		}
		else {
			printf("\nTe quedan %d intentos\n",reintentos);
		}
	}

	if(reintentos==0)
	{
		ret=-1;
	}
	else
	{
		ret=0;
		*pResultado = num;
	}

	return ret;
}


