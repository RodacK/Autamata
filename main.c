//TODO
//hacer para afn
//mirar lambda @ 
#include "gestor_automata.h"
<<<<<<< HEAD
int main () {
	char *datas[] = {"a","b","c","d"};
	char *datas2[] = {"Q0","Q1","Q2","Q3","Q4","Q5","Q6","Q7"};
	char *str[] = {"Q0","a","Q1,Q2","Q1","b","Q4","Q2","a","Q3","Q3","c","Q6","Q4","c","Q5","Q4","d","Q7","Q6","d","Q7"};
	char *inicio = {"Q0"};
	char *fin[] = {"Q5","Q7"};
	char *prueba[] = {"a","b","c"};
=======
#include "archivo.h"
int main (char** file) {
	
	FileManager("1.txt");
	printf("%s", readLine());
	
	//Alfabeto
	char *datas[] = {"0","1"};
	//Estados
	char *datas2[] = {"Q0","Q1"};
	//Caminos
	char *str[] = {"Q0","0","Q0","Q0","1","Q1","Q1","0","Q0","Q1","1","Q1"};
	//Nodo inicial
	char *inicio = {"Q0"};
	//Nodo final
	char *fin[] = {"Q0","Q1"};
	//Prueba
	char *prueba[] = {"1","1","0","0","1"};
>>>>>>> files
	
	add_data_matrix(datas,1,sizeof(datas)/4);
	add_data_matrix(datas2,0,sizeof(datas2)/4);
	generar_funcion_transitoria(str,0,sizeof(str)/4);
	for (int i=0;i<(sizeof(datas2)/4)+1;i++)
	{	
		for (int j=0;j<(sizeof(datas)/4)+1;j++)
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

