/*
 * jugadores.h
 *
 *  Created on: 1 oct 2022
 *      Author: Nicolas
 */

#ifndef JUGADORES_H_

typedef struct{
	int id;
	char nombre[50];
	char region[50];
	int	anioCreacion;
}eConfederacion;

typedef struct{
	int id;
	char nombre[50];
	char posicion[50];
	short numeroCamiseta;
	eConfederacion idConfederacion;
	float salario;
	short aniosContrato;
	short isEmpty;
}eJugador;




int BuscarLibre(eJugador jugadores[], int tam);
int AltaJugador(eJugador jugadores[], int tam, int codigoAutoIncremental);
int ModificarJugador(eJugador jugadores[], int tam, int opcion);
int BuscarJugador(eJugador jugadores[], int tam, int codigoABuscar);
int Baja(eJugador jugadores[], int tam);
float Promedio(eJugador jugadores[], int tam);
int SuperiorPromedio(eJugador jugadores[], int tam);
int VerificarLleno(eJugador jugadores[], int tam);
void OrdenarIdYMostrarJugador(eJugador jugadores[], int tam);
void OrdenarNombreConfederacionYJugador(eJugador jugadores[], int tam);
void MostrarJugadores(eJugador jugadores[], int tam);
void MostrarConfederacion(eJugador jugadores[], int tam);
void MostrarConfederacionJugador(eJugador jugadores[], int tam, char confederacion[]);
void ListarConfederacionJugador(eJugador jugadores[], int tam);
int CompararMayorNumero (int numeroUno, int numeroDos, int numeroTres, int numeroCuatro, int numeroCinco, int numeroSeis);
int TotalSalarios(eJugador jugadores[], int tam);
void MostrarSalario(eJugador jugadores[], int tam);
float CalcularPorcentajeJugador (int totalJugadores, int jugadoresConfederacion);
void ConfederacionMayorContratos(eJugador jugadores[], int tam);
void InformarPorcentajeJugadores (eJugador jugadores[], int tam);
void RegionMasJugadores(eJugador jugadores[], int tam);


#define JUGADORES_H_



#endif /* JUGADORES_H_ */
