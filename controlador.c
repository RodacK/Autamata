#include "controlador.h"
#include "util.h"
#include "gestor_automata.h"
#include "archivo.h"

void init(){
	
}

void usarArchivo(char* path){
	FileManager(path);
}

char** leerLineas(){
	char* line = NULL;
	int i = 0;
	do{
		line = readLine();
		automata[i] = line;
		printf("%s\n", automata[i]);
		i++;
		fflush(stdin);
	}while(line != NULL);
	return automata;
}

struct automata getAutomata(char* automa[]){
	struct automata Automata;
	char** res[sizeof(*automa)];
	int q = 0;
	for (int i = 0; i < sizeof(*automa) ; i++){
		split(automa[i], ",", res[i], q);
		printf("%s",res[i]);
	}
	/*char* line = readLine();
	Automata.alfabeto = split1(line,",");
	line = readLine();
	Automata.entradas = split1(line,",");
	line = readLine();
	Automata.caminos = split1(line,",");
	line = readLine();
	Automata.inicial = split1(line,",");
	line = readLine();
	Automata.fin = split1(line,",");
	
	Automata.prueba = split1(line,",");*/
	
	return Automata;
}
