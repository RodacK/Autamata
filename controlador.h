#ifndef CONTROLADOR_H
#define CONTROLADOR_H

void init();
void usarArchivo(char* path);
char** leerLineas();
void splitArrays();
char* automa[6];
typedef struct automata{
	char** alfabeto;
	char** entradas;
	char** caminos;
	char** inicial;
	char** fin;
	char** prueba;
} Automata;
struct automata getAutomata(char** automa);


#endif
