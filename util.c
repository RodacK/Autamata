#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include "Util.h"

/*
* Trae la informacion que haya ingresado el usuario por consola
*/
char * readLineKonsole() {
	char *line = NULL;
	size_t len = 0;
	getline(&line, &len, stdin);
	removeOfString(line, getString("\n"));
	return line;
}

/*
* Convierte una constante de cadena de texto en un variable
*/
char * getString(const char * str) {
	return (char *) str;
}

/*
* Remueve una cadena de texto de una cadena principal
*/
char * removeOfString(char * string, char * stringToRemove) {
	char *line = strstr(string, stringToRemove);
	if (line)
		strcpy(line, line + strlen(stringToRemove));
	return string;
}

/*
* Permite arministrar los mensajes de opcion doble en los cuales el usuario debe ingresar uno u otro caracter para continiar un proceso
*/
int selectInputTwoOptions(const char * message, int numberArgs, ...) {
	va_list elements;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	printf("\n %s \n", message);
	while ((read = getline(&line, &len, stdin)) != -1) {
		removeOfString(line, getString("\n"));
		va_start(elements, numberArgs);
		for (int i = 0; i < numberArgs; ++i) {
			//			printf("-%s-%s-\n", line, va_arg(elements, const char *));
			if (strcmp(line, va_arg(elements, const char *)) == 0) {
				free(line);
				va_end(elements);
				return i + 1;
			}
		}
		puts("-->Error, Opcion Incorrecta<--");
		printf("\n %s \n", message);
	}
	va_end(elements);
	return 0;
}

/*
* Trae la informacion que haya ingresado el usuario por consola
*/
char * getStringOfKonsole() {
	char *line = NULL;
	size_t len = 0;
	getline(&line, &len, stdin);
	removeOfString(line, getString("\n"));
	return line;
}

/*
* Perite separar cadenas de texto de acuerdo a lo que se requiera y guarda el resultado en arrayOutput y el tamano de separaciones hechas en la variable quantityTokens
*/
void split(char * string, const char * delimitation, char *** arrayOutput, int * quantityTokens) {
	int countTokens = 0;
	char * token;
	char ** array = NULL;
	token = strtok(getCopy(string), delimitation);
	while (token != NULL) {
		array = (char **) realloc(array, (countTokens + 1) * sizeof(char *));
		array[countTokens] = token;
		countTokens++;
		token = strtok(NULL, delimitation);
	}
	*arrayOutput = array;
	*quantityTokens = countTokens;
}

/*
* Clona una cadena de texto a otra direccion de memoria
*/
char * getCopy(char * string) {
	char * auxString = string;
	char * copy = NULL;
	copy = (char*) malloc((strlen(string) + 1) * sizeof(char));
	copy[strlen(string)] = '\0';
	auxString = &string[0];
	int index = 0;
	while (*auxString != '\0')
		copy[index++] = *auxString++;
	return copy;
}

/*
* Trae la posicion en la que se encuentra un elemento en un array, si el elemento no se encuentra retorna -1
*/
int getPositionInArray(char ** array, int length, char * string) {
	for (int i = 0; i < length; ++i) {
		//		puts(array[0]);
		//		printf("%s", array[6]);
		if (strcmp(array[i], string) == 0) {
			return i;
		}
	}
	return -1;
}

/*
* Determina si un dato esta contenido en un array
*/
bool containtArray(char ** array, int length, char * string) {
	return getPositionInArray(array, length, string) != -1;
}

/*
* Convierte un caracter a cadena de texto
*/
char * getStringOfChar(char character) {
	char * characterString = (char*) calloc(2, sizeof(char));
	//	char * copy = getCopy(line);
	characterString[0] = character;
	characterString[1] = '\0';
	return characterString;
}

/*
* Adiciona el contenido de la variable to y la variable from respectivamente a una variable resultado para convertilas en una sola
*/
char * concat(char * to, char * from) {
	int wordNewLength = strlen(to) + strlen(from) + 1;
	char * result = (char*) calloc(wordNewLength, sizeof(char));
	int i = 0;
	while (*to != '\0')
		result[i++] = *to++;
	while (*from != '\0')
		result[i++] = *from++;
	result[wordNewLength - 1] = '\0';
	return result;
}
