/* Built in qsort() */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 20

long long A[N];

int sortFunction( const void *a, const void *b);

int main(void)
{
	int  x, i;
	randomize();
	clrscr();
	for( i = 0; i < N; i++ )
	A[i] = rand() % 999999999;
	printf("Generating integers...\n");
	for( i = 0; i < N; i++ )
		printf("\n%lld",A[i]);
	getch();
	qsort((long long *)A, N, sizeof(A[0]), sortFunction);
	printf("\n\nSorted...\n");
	for( x = 0; x < N; x++ )
		printf("\n%lld", A[x]);
	getch();
	return 0;
}

int sortFunction(const void *a, const void *b)
{
	int x, y;
	x = *(long long *)a;
	y = *(long long *)b;
/*
	for descending if ( x < y )
*/
	if( x > y )
		return 1;
	else if( x < y )
		return -1;
	return 0;
}
