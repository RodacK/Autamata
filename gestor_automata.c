#include "gestor_automata.h"

void add_data_matrix(char *data[],int fila_o_columna,int cant){ //0 fila y 1 columna
	int cont = 0;
	while(cont != cant){
		if(fila_o_columna==0){
			matrix[cont+1][0] = data[cont];
		}else{
			matrix[0][cont+1] = data[cont];
		}
		cont++;
	}
}

void generar_funcion_transitoria(char *data[],int cont, int cant){
	if(cont == cant)return;
	else{
		int x = get_posicion(data[cont],0);
		int y = get_posicion(data[cont = cont+1],1);
		matrix[x][y] = data[cont = cont+1];
		generar_funcion_transitoria(data, cont+1,cant);
		return;
	}
}
int get_posicion(char* data,int fila_o_columna){
	//0 para recorrer etiquetas de fila o 1 para recorrer etiquetas de columna
	int i;
	for (i=1;i<NUM_CHARS;i++){
		if(fila_o_columna==0){
			if(strcmp(matrix[i][0], data) == 0){
				break;
			}}else{
			if(strcmp(matrix[0][i], data) == 0){
				break;
			}
		}
	}
	return i;
}


void verify_automata(char *data[],char* inicio, char* fin[], int cont, int cant){
	if(cont == cant){
		if(inicio==fin[0]||inicio==fin[1]){
			printf("\n ---- TRUE");
		}else{
			printf("\n ---- false");
		}
		return; 
	}else{
		int x = get_posicion(inicio,0);
		int y = get_posicion(data[cont],1);
		
		if( strchr(matrix[x][y], ',')==NULL){
			printf("\n ------ inicio %s   fin %s  nuevo inicio %s",inicio,fin[1], matrix[x][y]);
			verify_automata(data,matrix[x][y],fin,cont+1,cant);
			return;
		}else{
			char lol[sizeof(matrix[x][y])+2];
			strcpy(lol,matrix[x][y]);
			for (char* p = strtok(lol,","); p != NULL; p = strtok(NULL, ",")){
				int a = get_posicion(p,0);
				int b = get_posicion(data[cont+1],1);
				if(matrix[a][b]!= NULL){
					printf("\n ------ inicio %s   fin %s  nuevo inicio %s",inicio,fin[1], p);
					verify_automata(data,p,fin,cont+1,cant);
					return;
				}	
			}
			
		}
	}
	
}
