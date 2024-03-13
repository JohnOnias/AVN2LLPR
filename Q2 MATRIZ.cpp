#include <stdio.h>


int main(){
	
	
	int matriz[6][3]; 
	int soma = 0; 

for( int l = 0; l<6; l++){
			
		for(int c= 0; c <3; c++){
			scanf("%d, %d", &matriz[l][c]); 
				
				if(matriz[0][c] >=0){
					soma += matriz[0][c]; 
				}
			 
		}
}

	printf("\n \n");
	
	
for(int l = 0; l<6; l++){
	
	for( int c=0; c<3; c++){
		
		printf("%d ", matriz[l][c]);
		
		printf("\n");
	}

}
printf("%d", soma);




return 0; 
}
