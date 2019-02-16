
#include<stdio.h>
#include<unistd.h>
int main()
{
	char x;
	printf("Find Mean (1) \n");
	printf("Tower of Hanoi (2) \n");
	printf("N Queens (3) \n");
	printf("Palindrome (4) \n");
	printf("Factorial(5) \n");
	printf("Gauss Elimination (6) \n");
	printf("Fibonacchi (7) \n");
	
	printf("Pick an algorithm to run: ");

	scanf("%c",&x);
	switch(x){
		case '1' :
		execl("findMean","findMean", NULL);
		break;
		case '2' :
		execl("towerOfHanoi","towerOfHanoi", NULL);
		break;
		case '3' :
		execl("nQueens","nQUeens", NULL);
		case '4' :
		execl("palindrome","plaindrome", NULL);
		case '5' :
		execl("factorial", "factorial", NULL);
		case '6' :
		execl("gaussElimination", "gaussElimination", NULL);
		case '7' :
		execl("fibonacci", "fibonacci", NULL);
		default:
		 printf("Invalid input \n");
	}

        return 0;
}
