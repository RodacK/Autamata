//TODO
//obtener tamanio puntero
//eliminar datos ya usados
//hacer para afn
//lectura de args, files, consola para automata y pruebas
//mirar lambda @ 
//mirar lo demultiples estados finales
#include "gestor_automata.h"
int main () {
	char *datas[] = {"0","1"};
	char *datas2[] = {"Q0","Q1"};
	char *str[] = {"Q0","0","Q0","Q0","1","Q1,Q0","Q1","0","Q0","Q1","1","Q1"};
	char *inicio = {"Q0"};
	char *fin[] = {"Q0","Q1"};
	char *prueba[] = {"1","1","0","0","1"};
	
	add_data_matrix(datas,1);
	add_data_matrix(datas2,0);
	generar_funcion_transitoria(str,0,sizeof(str)/4);
	for (int i=0;i<NUM_CHARS;i++)
	{	
		for (int j=0;j<NUM_CHARS;j++)
		{	
			if(matrix[i][j]==NULL){
				printf("|xx|");
			}else{
				printf("|%s|",matrix[i][j]);	
			}
		}
		printf("\n");
	}
	verify_automata(prueba,inicio,fin,0,sizeof(prueba)/4);
	
	return(0);
}
