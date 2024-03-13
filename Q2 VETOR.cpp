#include <stdio.h>
int main(){
	int tam = 8; 
	int vetor_principal[tam] = {0}; 
	int vetor_positivo[tam] ={0}; 
	int vetor_negativo[tam] = {0};
	
	
	for(int i = 0; i< tam; i++ ){
			
			scanf("%d", &vetor_principal[i]);
			fflush(stdin);
			if(vetor_principal[i] >0 ){
				vetor_positivo[i] = vetor_principal[i]; 
		
			}
			if(vetor_principal[i] <0){
				vetor_negativo[i] = vetor_principal[i]; 
					
			}
		}
			
			
			printf("\n VETOR COM NEGATIVOS \n");
	for(int i = 0; i< tam; i++ ){
		printf("%d ", vetor_negativo[i]);
	}
	
					printf("\n VETOR COM POSITIVO \n");
	for(int i = 0; i< tam; i++ ){
		printf("%d ", vetor_positivo[i]);
	}
		
	
	
	
	
	
	
	return 0; 
}
