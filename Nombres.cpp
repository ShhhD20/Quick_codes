#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
	int ans = 11;
	int A[10] = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
	char Name[10][10] = {"Carlitos\n", "Vero\n", "Quique\n", "Susy\n", "Fran\n", "Majo\n", "Toño\n", "Bibi\n", "Chema\n", "Caro\n"};
	srand(time(NULL));
	
	for(int a = 0; a < 10; a++){
		while(ans == A[1] || ans == A[2] || ans == A[3] || ans == A[4] || ans == A[5] || ans == A[6] || ans == A[7] || ans == A[8] || ans == A[9] || ans == A[0]){
		ans = rand() % 10;
		}
		A[a] = ans;
		printf("%s", Name[ans]);
	}
	return 0;
}
