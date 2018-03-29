#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <stdio.h>
#include <stdbool.h>

extern char * pathFile;
extern FILE * file;
extern ssize_t sizeReadLastLine;
extern char * lastMode;

void FileManager(char * path);
char * readLine();
void writeLine(char * line, char * mode);
ssize_t getSizeReadLastLine();
char * getLastMode();
char * getPathFile();
FILE * getFile();
bool existFile(char * path);
char * getAbsolutePath();

#endif
