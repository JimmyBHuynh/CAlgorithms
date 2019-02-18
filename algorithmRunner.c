
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	system("clear");
	char x;
	printf("ALGORITHM RUNNER \n");
	printf("SELECT CATEGORY: \n");
	printf("---------------------------\n");
	printf("Math/Algebra (1) \n");
	printf("Data Structures (2) \n");
	printf("Conversions (3) \n");
	printf("Puzzles (4) \n");
	


	scanf("%c",&x);
	switch(x){
		case '1' :
		system("clear");
		printf("MATH/ALGEBRA \n");
		printf("SELECT ALGORITHM TO RUN:\n");
		printf("---------------------------\n");
		printf("Find Mean (1) \n");
		printf("Factorial (2) \n");
		printf("Gauss Elimination (3) \n");
		
		scanf(" %c",&x);
			switch(x){
				case '1' :
				execl("findMean","findMean", NULL);
				break;
				case '2' :
				execl("factorial", "factorial", NULL);
				break;
				case '3' :
				execl("gaussElimination", "gaussElimination", NULL);
				break;
				default:
				printf("Invalid input");
					}
		break;
		case '2' :
	system("clear");
		printf("DATA STRUCTURES \n");
		printf("SELECT ALGORITHM TO RUN:\n");
		printf("---------------------------\n");
		printf("Bubble Sort (1) \n");
		
		scanf(" %c",&x);
			switch(x){
				case '1' :
				execl("bubbleSort","bubbleSort", NULL);
				break;
				default:
				printf("Invalid input");
					}
		break;
		case '3' :
		system("clear");
		printf("CONVERSIONS \n");
		printf("SELECT ALGORITHM TO RUN:\n");
		printf("---------------------------\n");
		printf("Temperature (1) \n");
		scanf(" %c",&x);
			switch(x){
				case '1' :
				execl("temperature","temperature", NULL);
				break;
				default:
				printf("Invalid input");
					}
		case '4' :
		system("clear");
		printf("PUZZLES \n");
		printf("SELECT ALGORITHM TO RUN:\n");
		printf("---------------------------\n");
		printf("nQueen (1) \n");
		printf("Tower of Hanoi (2) \n");
		printf("Palindrome (3) \n");

		scanf(" %c",&x);
			switch(x){
				case '1' :
				execl("nQueens","nQueens", NULL);
				break;
				case '2' :
				execl("towerOfHanoi","towerOfHanoi", NULL);
				break;
				case '3' :
				execl("palindrome","plaindrome", NULL);
				break;
				default:
				printf("Invalid input");
					}
		break;


		case '7' :
		execl("fibonacci", "fibonacci", NULL);
		default:
		 printf("Invalid input \n");
	}

        return 0;
}
