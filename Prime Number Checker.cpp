#include <stdio.h>

int main (){
	int ans;
	int b = 0;
	
	printf("\t\t Detector de numeros primos\n");
	printf("Ingrese un numero primo: ");
	scanf("%d", &ans);
	
	for(int a = 2; a < ans; a++){
		if(ans % a == 0) b = 1;
	}
	if(b == 0) printf("El numero ingresado(%d), es primo!!", ans);
	else printf("El numero ingresado(%d), no es primo :(", ans);
	
	return 0;
}
