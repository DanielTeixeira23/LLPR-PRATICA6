#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 N�MEROS E VEJA ELES EM ORDEM CRESCENTE\n\n");
	
	int v[10], aux;
	
	printf("Digite os n�meros:\n");
	for(int i=0; i<10; i++){
 		scanf("%d", &v[i]);
	}
	
	printf("\nN�meros digitados em ordem crescente:\n");
	for(int i=0; i<10; i++){
		for(int a=i; a<10; a++){
			if(v[i] > v[a]){
				aux = v[i];
				v[i] = v[a];
				v[a] = aux;
			}		
		}
		printf("%d ", v[i]);
	}
	
	return 0;
}
