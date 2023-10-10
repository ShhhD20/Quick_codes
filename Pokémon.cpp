#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main (){
	int ans = 11;
	int r0, r1, r2;
	int contA = 0, contF = 0;
	int A[20];
	int color;
	char Agua[10][11] = {"Feraligatr", "Tentacool", "Empoleon", "Magikarp", "Omanyte", "Poliwrath", "Starmie", "Lapras", "Wooper", "Squirtle"};
	char Fuego[10][11] = {"Torkoal", "Chandelure", "Charizard", "Darmanitan", "Talonflame", "Incineroar", "Houndoom", "Flareon", "Ninetales", "Ponyta"};
	char MovA[10][11] = {"Burbuja", "Surf", "Hidrobomba", "Cascada", "Hidrocañón", "Salpicar", "Acua jet", "Buceo", "Acua aro", "Escaldar"};
	char MovF[10][12] = {"Ascuas", "Llamarada", "Estallido", "Puno fuego", "Infierno", "Pirotecnia", "Llama azul", "Golpe calor", "Nitrocarga", "Humareda"};
	srand(time(NULL)); 
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //*/
	
	for(int i = 0; i < 20; i++){
		A[i] = 21;
	}
	for(int a = 0; a < 20; a++){
		printf("%d. ", a+1);
		ans = rand() % 20;
		while(ans == A[0] || ans == A[1] || ans == A[2] || ans == A[3] || ans == A[4] || ans == A[5] || ans == A[6] || ans == A[7] || ans == A[8] || ans == A[9] || ans == A[10] || ans == A[11] || ans == A[12] || ans == A[13] || ans == A[14] || ans == A[15] || ans == A[16] || ans == A[17] || ans == A[18] || ans == A[19]){
			ans = rand() % 20;
		}
		if (ans < 10){
			printf("%s \t", Agua[ans]);
			r0 = rand() % 10; do{r1 = rand() % 10; } while (r0 == r1); r2 = rand() % 10; 
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			printf("Tecnicas: ");
			color = 3;
			SetConsoleTextAttribute(hConsole, color);
			printf("%s    %s    ", MovA[r0], MovA[r1]);
			color = 12;
			SetConsoleTextAttribute(hConsole, color);
			printf("%s \n", MovF[r2]);
			color = 7;
			SetConsoleTextAttribute(hConsole, color);
		}
		if (ans >= 10){
			printf("%s \t", Fuego[ans-10]);
			r0 = rand() % 10; do{r1 = rand() % 10; } while (r0 == r1); r2 = rand() % 10; 
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			printf("Tecnicas: ");
			color = 12;
			SetConsoleTextAttribute(hConsole, color);
			printf("%s    %s    ", MovF[r0], MovF[r1]);
			color = 3;
			SetConsoleTextAttribute(hConsole, color);
			printf("%s \n", MovA[r2]);
			color = 7;
			SetConsoleTextAttribute(hConsole, color);
		}
		A[a] = ans;
	}
	return 0;
}
