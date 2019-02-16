
#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("clear");
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
		if(i == n){
			printf("%d \n", t1);
		}
		else{
			printf("%d, ", t1);}
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
