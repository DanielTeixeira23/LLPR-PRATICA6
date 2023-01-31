#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 NÚMEROS E VEJA OS NÚMEROS PARES DIGITADOS\n\n");
	
	int x[10];
	
	printf("Digite os números:\n");
	for(int i=0; i<10; i++){
 		scanf("%d", &x[i]);	
	}
	
	printf("\nNúmeros pares que foram digitados:\n");
	for(int i=0; i<10; i++){
		if(x[i]%2==0){
			printf("%d ", x[i]);
		}
	}
	
	return 0;
}
