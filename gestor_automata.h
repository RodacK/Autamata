#ifndef _AUTOMATA_H_
#define _AUTOMATA_H_
#define NUM_CHARS 9
#define TRUE  = 1
#define FALSE = 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
char *matrix[NUM_CHARS][NUM_CHARS];
void add_data_matrix(char* data[],int fila_o_columna, int cant);
void generar_funcion_transitoria(char* data[], int cont,int cant);
int get_posicion(char* data, int fila_o_columna);
void verify_automata(char *data[],char* inicio, char* fin[], int cont, int cant);
#endif
