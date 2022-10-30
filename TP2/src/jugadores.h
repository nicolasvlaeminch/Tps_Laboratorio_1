/*
 * libros.h
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

typedef struct{
	int dia;
	int mes;
	int	anio;
}eFecha;

typedef struct
{
	int codigoEditorial;
	char descripcion[51];
}eEditorial;


typedef struct
{
	int codigoPais;
	char descripcion[51];
}ePais;

typedef struct
{
	int codigoAutor;
	char nombre[51];
	ePais nacionalidad;
}eAutor;

typedef struct
{
	int codigoGenero;
	char descripcion[51];
}eGenero;

typedef struct
{
	int codigoLibro;
	char titulo[51];
	eFecha fecha;
	int importe;
	eAutor autor;
	eEditorial editorial;
	int estado;
	eGenero genero;
}eLibro;

int BuscarLibre(eJugador jugadores[], int tam);
int AltaJugador(eJugador jugadores[], int tam, int codigoAutoIncremental);
int ModificarJugador(eJugador jugadores[], int tam, int opcion);
int BuscarJugador(eJugador jugadores[], int tam, int codigoABuscar);
int Baja(eJugador jugadores[], int tam);
float Promedio(eJugador jugadores[], int tam);
int SuperiorPromedio(eJugador jugadores[], int tam);
int VerificarLleno(eJugador jugadores[], int tam);
void OrdenarImporteYTitulo(eJugador jugadores[], int tam);
void OrdenarDosCadenas(eJugador jugadores[], int tam);
void MostrarJugadores(eJugador jugadores[], int tam);
void MostrarConfederacion(eJugador jugadores[], int tam);
void MostrarConfederacionJugador(eJugador jugadores[], int tam, char confederacion[]);
void ListarConfederacionJugador(eJugador jugadores[], int tam);
int TotalSalarios(eJugador jugadores[], int tam);
void MostrarSalario(eJugador jugadores[], int tam);
void ConfederacionMayorContratos(eJugador jugadores[], int tam);

#define JUGADORES_H_



#endif /* JUGADORES_H_ */
