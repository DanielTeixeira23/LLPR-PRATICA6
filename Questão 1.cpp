#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 N�MEROS INTEIROS E VEJA OS N�MEROS PARES DIGITADOS DE TR�S PRA FRENTE\n\n");
	
	int num[10];
	
	printf("Digite os n�meros:\n");
	for(int i=0; i<10; i++){
 		scanf("%d", &num[i]);	
	}
	
	printf("\nN�meros pares que foram digitados:\n");
	for(int j=9; j>=0; j--){
		if(num[j]%2==0){
			printf("%d ", num[j]);
		}
	}

	return 0;
}
