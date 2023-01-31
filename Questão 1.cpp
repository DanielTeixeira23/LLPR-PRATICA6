#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 NÚMEROS INTEIROS E VEJA OS NÚMEROS PARES DIGITADOS DE TRÁS PRA FRENTE\n\n");
	
	int num[10];
	
	printf("Digite os números:\n");
	for(int i=0; i<10; i++){
 		scanf("%d", &num[i]);	
	}
	
	printf("\nNúmeros pares que foram digitados:\n");
	for(int j=9; j>=0; j--){
		if(num[j]%2==0){
			printf("%d ", num[j]);
		}
	}

	return 0;
}
