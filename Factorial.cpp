#include <stdio.h>

int main (){
	int ans;
	int operacion = 1;
	
	printf("El factorial de que numero deseas conseguir?: ");
	scanf("%d", &ans);
	
	for (int a = 1; a <= ans; a++){
		operacion = operacion * a;
	}
	printf("El factorial de %d, es igual a: %d", ans, operacion);
	
	return 0;
}
