#include<stdio.h>
#include<stdlib.h>
static int count = 0;
// C recursive function to solve tower of hanoi puzzle 
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
	count ++;
    if (n == 1) 
    { 
        printf("Move disk 1 from rod %c to rod %c \n", from_rod, to_rod); 
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
    printf("Move disk %d from rod %c to rod %c \n", n, from_rod, to_rod); 
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 
  
int main() 
{ 
	system("clear");
    int n = 5; // Number of disks 
    printf("Tower of Hanoi\nEnter number of disk to solve: ");
    scanf("%i",&n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
    printf("Moves to solve: %i \n",count);
    return 0; 
}
