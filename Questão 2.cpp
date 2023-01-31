#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tDIGITE 10 NÚMEROS\n\n");
	
	int v[10];
	
	printf("Digite os números:\n");
	for(int i=0; i<10; i++){
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			v[i] = 1;
		}else{
			v[i] = -1;
		}
	}
	
	for(int i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	

	return 0;
}
