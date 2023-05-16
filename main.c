#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int v[10];
	
	int i = 0;
	int numero = 0;
	for(i;i<10;i++){
		printf("Inserire un numero ");
		scanf("%d", &v[i]);
	}
	
	i = 0;
	for(i;i<10;i++){
		if(v[i]>numero){
			numero = v[i];
		}
	}
	
	printf("Il numero maggiore xe %d",numero);
}
