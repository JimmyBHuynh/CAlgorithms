#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("clear");
	double x;
	char n;
 
	printf("Temperature Conversion: \n");
	printf("Type temperature: ");
	scanf("%lf", &x);
	printf("Pick Conversion: \n");
	printf("Farenheit to Celsius(1) \n");
	printf("Celsius to Farenheit(2) \n");
	printf("Celsius to Kelvin(3)\n");
	printf("Kelvin to Celsius(4) \n");
	printf("Farenheit to Kelvin(5) \n");
	printf("Kelvin to Farenheit(6) \n");
	scanf(" %c", &n);
	switch(n)
	{
		case '1':
		printf("%.2f Fareinheit is ", x);
		x = (x -32)*5/9;
		printf("%.2f Celsius\n", x);
		break;
		case '2':
		printf("%.2f Celsius is ", x);
		x = x*(9/5)+32;
		printf("%.2f Farenheit\n", x);
		break;
		case '3':
		printf("%.2f Celsius is ", x);
		x = x + 273.15;
		printf("%.2f Kelvin\n", x);
		break;
		case '4':
		printf("%.2f Kelvin is ", x);
		x = x - 273.15;
		printf("%.2f Celsius\n", x);
		break;
		case '5':
		printf("%.2f Fareinheit is ", x);
		x = (x + 459.67) * 5/9;
		printf("%.2f Kelvin\n", x);
		break;
		case '6':
		printf("%.2f Kelvin is", x);
		x = x * 9/5 - 459.67;
		printf("%.2f Fareinheit\n", x);
		break;
		default:
		printf("Invalid Selection\n");
		
		}
	
 
  return 0;
}
