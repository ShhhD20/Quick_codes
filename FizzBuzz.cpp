#include <stdio.h>

int main (){
	int ans;
	
	printf("\t\tFizzBuzz\n");
	printf("Hasta que numero quieres llegar?: ");
	scanf("%d", &ans);
	
	if(ans > 0){
		printf("\n0");
	}
	for(int a = 1; a <= ans; a++){
		printf(", ");
		if(a % 3 == 0){
			printf("Fizz");
		}
		if(a % 5 == 0){
			printf("Buzz");
		}
		else if(a % 3 != 0){
			printf("%d", a);
		}
	}
	
	return 0;
}
