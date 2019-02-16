#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
int a[1000] ,n,i,j,sum=0;
char x;
float mean;
system("clear");
//Inputing Values
printf("Finding Mean Algorithm\n\nFormula: mean=sum/count\n\n(r) for random number or (n) for manual input: ");
scanf("%c",&x);
if(x == 'r'){
printf("Enter no. of Random Numbers:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	a[i]=rand()%100;
}
printf("Random Numbers Generated are: \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
else if(x == 'n'){
printf("Enter no. of inputs: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter no. %d:", i+1);
	scanf("%d",&j);
	a[i]= j;
}
}
//Algorithm
for(i=0;i<n;i++)
{
sum = sum + a[i];
}
mean = sum/(float)n;
printf("Sum: %d\n", sum);
printf("Count: %d\n", n);
printf("Mean: %f \n",mean);
return 0;
}
