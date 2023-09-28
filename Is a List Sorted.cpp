#include <stdio.h>

int main (){
	int ans;
	int b = 0;
	int num;
	int ei = 0;
	
	printf("\t\tLista de numeros organizados\n");
	printf("Cuantos numeros deseas ingresar?: ");
	scanf("%d", &ans);
	int A[ans];
	
	for(int a = 1; a <= ans; a++){
		printf("Ingrese digito %d: ", a);
		scanf("%d", &A[b]);
		b++;
	}
	if(A[0] < A[ans-1]){
		for(int c = 0; c+1 < ans; c++){
			num = A[c];
			if(num > A[c+1]){
				printf("El orden de menor a mayor, esta incorrecto");
				c = ans;
				ei = 1;
			}
		}
		if (ei == 0){
			printf("El orden de menor a mayor es correcto :)");
		}
	}
	else if(A[0] > A[ans-1]){
		for(int d = 0; d+1 < ans; d++){
			num = A[d];
			if(num < A[d+1]){
				printf("El orden de mayor a menor, esta incorrecto");
				d = ans;
				ei = 1;
			}
		}
		if (ei == 0){
			printf("El orden de mayor a menor es correcto :)");
		}
	}
	return 0;
}
