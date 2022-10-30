/*
 * operaciones.c
 *
 *  Created on: 22 sept 2022
 *      Author: Nicolas
 */
#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

/**
 * \fn int SumatoriaCosto(char*, int)
 * \brief
 *
 * \param mensaje
 * \param costoTotal
 * \return
 *
 * Funcion usada para pedir un entero y sumarla en la variable ingresada.
 * Se ingresa un char* en el cual se debe agregar un mensaje para que el usuario lo vea antes de pedir el entero.
 * Se ingresa un int en el cual se va a sumar a si mismo con el entero ingresado para luego ser retornado.
 */
int SumatoriaEntero(char* mensaje, char* mensajeError, int numero) {
	int numeroIngresado;
	printf(mensaje);
	fflush(stdin);
	scanf("%d",&numeroIngresado);
	while(numeroIngresado < 1) {
		printf(mensajeError);
		scanf("%d",&numeroIngresado);
	}
	numero = numero + numeroIngresado;

	return numero;
}

/**
 * \fn float PromedioJugadores(int, int)
 * \brief
 *
 * \param tipoJugadores
 * \param cantidadJugadores
 * \return
 *
 * Funcion usada para sacar el promedio de un entero y pasarlo a flotante.
 * Se ingresan dos enteros para uno ser dividido por el otro.
 * Retorna el promedio en un numero flotante.
 */
float Promedio(int numerador, int denominador) {
	float promedio;

	promedio = (float)numerador / denominador;

	return promedio;
}

/**
 * \fn void SeisContadores(int*, int*, int*, int*, int*, int*, int*)
 * \brief
 *
 * \param eleccionContador
 * \param pContadorUno
 * \param pContadorDos
 * \param pContadorTres
 * \param pContadorCuatro
 * \param pContadorCinco
 * \param pContadorSeis
 *
 * Funcion usada para seleccionar un entero y sumarle uno.
 * Se ingresan siete enteros con puntero, en el primero se ingresa el numero del entero que desee sumarle uno
 * y en el resto se agregan los seis enteros que desea dar como opcion para ser sumados.
 * No retorna nada.
 */


void SumarEnteroSeleccionado (int* eleccionNumero, int* pNumeroUno, int* pNumeroDos, int* pNumeroTres, int* pNumeroCuatro, int* pNumeroCinco, int* pNumeroSeis) {
	switch(*eleccionNumero) {
	case 1:
		(*pNumeroUno)++;
		break;
	case 2:
		(*pNumeroDos)++;
		break;
	case 3:
		(*pNumeroTres)++;
		break;
	case 4:
		(*pNumeroCuatro)++;
		break;
	case 5:
		(*pNumeroCinco)++;
		break;
	case 6:
		(*pNumeroSeis)++;
		break;
	}
}


