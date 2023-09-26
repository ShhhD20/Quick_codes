#include <stdio.h>

int main (){
	int ans;
	int b = 0;
	int num = -32768;
	
	printf("Cuantos digitos enteros, deseas comparar?: ");
	scanf("%d", &ans);
	int A[ans];
	
	for(int a = 1; a <= ans; a++){
		printf("Valor %d por escanear: ", a);
		scanf("%d", &A[b]);
		b++;
	}
	for(int c = 0; c < ans; c++){
		if (num < A[c]){
			num = A[c];
		}
	}
	printf("El valor ingresado mas alto es: %d", num);
	
	return 0;
}
