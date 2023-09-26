#include <stdio.h>

int main (){
	int ans;
	int b = 0;
	
	printf("\t\t Detector de numeros pares\n");
	printf("Cuantos numeros deseas evaluar?: ");
	scanf("%d", &ans);
	int A[ans];
	
	for(int a = 0; a < ans; a++){
		printf("Ingrese un numero par: ");
		scanf("%d", &A[a]);
	}
	printf("\n\n");
	for(int b = 0; b < ans; b++){
		if(A[b] % 2 == 0){
			printf("%d. Es numero par\n", A[b]);
		}
	}
	
	return 0;
}
