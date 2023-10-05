#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
	int ans = 11;
	int A[10] = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
	char Agua[12][10] = {"Feraligatr\n", "Tentacool\n", "Empoleon\n", "Magikarp\n", "Omanyte\n", "Poliwrath\n", "Starmie\n", "Lapras\n", "Wooper\n", "Squirtle\n"};
	char Fuego[12][10] = {"Torkoal\n", "Chandelure\n", "Charizard\n", "Darmanitan\n", "Talonflame\n", "Incineroar\n", "Houndoom\n", "Flareon\n", "Ninetales\n", "Ponyta\n"};
	srand(time(NULL));
	
	for(int b = 0; b < 1; b++){
		for(int a = 0; a < 10; a++){
			while(ans == A[1] || ans == A[2] || ans == A[3] || ans == A[4] || ans == A[5] || ans == A[6] || ans == A[7] || ans == A[8] || ans == A[9] || ans == A[0]){
			ans = rand() % 10;
			}
			A[a] = ans;
			printf("%s", Name[ans]);
		}
	}
	return 0;
}
