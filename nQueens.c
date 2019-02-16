/* C program to solve N Queen Problem using backtracking
 * The Problem: Place N queens on an NxN chessboard so that no two queens attack each other 
 * Algorithm
 * 1) Start in the leftmost column
 * 2) if all queens are placed
 * return true
 * 3) try all rows in the current column. Do following for every tried row.
 * 		a) If the queen can be placed safely in this row then mark this [row, column] as part of the 
 * 		solution and recursively check if placing queen here leads to a solution. 
 * 		b)if queen[r,c] == solution return true
 * 		c)If queen != lead to solution then backtrack and try other rows 
 * 4) if all rows have been tried and no solution retunr false to trigger backtracking*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

/*Print Solution Function */
void printSolution(int N, int board[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf(" %d ", board[i][j]);
		printf("\n");
	}
}
	
bool isSafe(int N,int board[N][N], int row, int col)
{
	int i, j;
	
	//Check this row on the left side
	for (i = 0; i < col; i++)
	if (board[row][i])
	return false;
	// Check upper diagonal on left side
	for (i=row, j=col; i>=0 && j>=0; i--, j--)
		if (board[i][j])
			return false;
	// Check lower diagonal of left side		
	for (i = row, j = col; j>=0 && i<N; i++, j--)
	if (board[i][j])
		return false;
	return true;
		
}

/* A recursive utility function to solve N Queen problem */
bool solveNQUtil(int N, int board[N][N], int col)
{
	//base case:
	if (col >=N)
	return true;
	
	for (int i = 0; i < N; i++)
	{
		
		if( isSafe(N,board, i, col))
		{
			board[i][col] = 1;
		if (solveNQUtil(N,board, col+1))
		return true;
		
		board[i][col] =0;
	}
}
return false;
}

bool solveNQ()
{
int n; 
printf("N-Queen Algorithm\nEnter size for board: ");
scanf("%d",&n);

int board[n][n];
for(int i=0; i<n; i++)
   for(int j=0; j<n; j++)
   {
      board[i][j] = 0;
   }

	if (solveNQUtil(n,board, 0) == false)
	{
		printf("Solution does not exist \n");
		return false;
	}
	printSolution(n,board);
	return true;
}

int main()
{
	system("clear");
	solveNQ();
	return 0;
}			
