//Incluir esta libreria para poder hacer las llamadas en shiva2.upc.es
#include <my_global.h>
#include <mysql.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	MYSQL *conn;
	int err;
	// Estructura especial para almacenar resultados de consultas 
	MYSQL_RES *resultado;
	MYSQL_ROW row;
	//Creamos una conexion al servidor MYSQL 
	conn = mysql_init(NULL);
	if (conn==NULL) 
	{
		printf ("Error al crear la conexi?n: %u %s\n", mysql_errno(conn), mysql_error(conn));
		exit (1);
	}
	//inicializar la conexin
	conn = mysql_real_connect (conn, "localhost","root", "mysql", "Campeonato",0, NULL, 0);
	if (conn==NULL) 
	{
		printf ("Error al inicializar la conexion: %u %s\n", mysql_errno(conn), mysql_error(conn));
		exit (1);
	}
	

	char consulta [80];
	strcpy (consulta,"SELECT Partida.ganador FROM Partida");
	
	//No se como recorrer la lista de la base de datos desde C, pero entiendo que he de hacer un recorrido por la lista asignando a cada username un contador, y haciendo que este
	//aumente su valor cada vez que dicho username aparezca como ganador en la lista. Luego, comparo los contadores e imprimo por pantalla el nombre del jugador asociado
	//al contador con el valor más alto.
	
	
	

