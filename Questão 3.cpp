#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 N�MEROS E VEJA OS N�MEROS PARES DIGITADOS\n\n");
	
	int x[10];
	
	printf("Digite os n�meros:\n");
	for(int i=0; i<10; i++){
 		scanf("%d", &x[i]);	
	}
	
	printf("\nN�meros pares que foram digitados:\n");
	for(int i=0; i<10; i++){
		if(x[i]%2==0){
			printf("%d ", x[i]);
		}
	}
	
	return 0;
}
