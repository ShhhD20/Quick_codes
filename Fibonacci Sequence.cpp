#include <stdio.h>

int main (){
	int ans;
	int num = 1;
	int suma = 0;
	int prev = 0;
	
	printf("Cuantos digitos de la secuencia deseas?: ");
	scanf("%d", &ans);
	
	if(ans > 0) printf("0, ");
	if(ans > 1){
		printf("1");
		for (int a = 2; a < ans; a++){
			suma = num + prev;
			printf(", %d", suma);
			prev = num;
			num = suma;
		}
	}
	
	return 0;
}
