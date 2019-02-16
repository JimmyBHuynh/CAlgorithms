#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("clear");
	int c, n, fact = 1;
 
	printf("Factorial Algortihm\nEnter a number to calculate its factorial: ");
	scanf("%d", &n);
 
	for (c = 1; c <= n; c++){
		
		fact = fact * c;
		if (c==n)
		printf("%i = %i",c,fact);
		else
		printf("%i *",c);
		}
 
	printf("\nFactorial of %d = %d\n", n, fact);
 
  return 0;
}
