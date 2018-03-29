#include "archivo.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include "Util.h"
#include <stdlib.h>

static const char * jumpLine = "\n";
static const char * modeReadOnly = "r";
static const char * modeUpdate = "r+";

char * pathFile;
FILE * file;
ssize_t sizeReadLastLine;
char * lastMode;

/*
* Abre el archivo para rectura en modo r+ por defecto
*/
void FileManager(char * path) {
	pathFile = path;
	file = fopen(path, lastMode = (char*) modeUpdate);
}

/*
* Trae la siguiente linea de texto a leer en el archivo
*/
char * readLine() {
	/*
	* Compara si se encuentra en modo de lectura, de no ser así, lo cambia
	*/
	if(strcmp(lastMode, modeReadOnly) != 0) {
		file = fopen(pathFile, lastMode = (char*) modeReadOnly);
	}
	/*
	* Declaración de variables, linea Actual, tamaño y tamañoAnteriod de la linea
	*/
	char * line = NULL;
	size_t size = 0;
	sizeReadLastLine = getline(&line, &size, file);
	if (strcmp(line, "\n") == 0 || strcmp(line, "") == 0) {
		return NULL;
	}
	/*
	*Llama metodo de uyil.h
	*/
	line = removeOfString(line, getString("\n"));
	return line;
}

/*
* Escribe una linea de texto en el archivo y reliza un salto de linea
*/
void writeLine(char * line, char * mode) {
	file = fopen(pathFile, lastMode = mode);
	fprintf(file, line);
	fprintf(file, jumpLine);
	fclose(file);
}

/*
* Trae la cantidad de bytes leida en la ultima linea procesada del archivo
*/
ssize_t getSizeReadLastLine() {
	return sizeReadLastLine;
}

/*
* Trae el ultimo modo de rectura o escritura usado en el archivo
*/
char * getLastMode() {
	return lastMode;
}

/*
* Trae la ruta del o nombre del archivo
*/
char * getPathFile() {
	return pathFile;
}

/*
* Trae la variable que guarda el aarchivo
*/
FILE * getFile() {
	return file;
}

/*
* Determina si un archivo es accesible para usar en el prorama
*/
bool existFile(char * path) {
	if (fopen(path, "r+") == NULL) {
		return false;
	}
	return (access(path, F_OK) != -1) ? true : false;
}

