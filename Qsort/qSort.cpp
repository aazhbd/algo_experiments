/* Quick Sort Algorithm */

#include<stdio.h>

typedef long long mt;

void swap(mt *A, mt i, mt j)
{
	A[i] = A[i] + A[j] - (A[j]=A[i]);
}

mt part(mt *A, mt l, mt r)
{
	mt p = l++;
	while(l<=r)
	{
		while(A[l]<A[p])
			l++;
		while(A[r]>A[p])
			r--;
		if(l<=r)
			swap(A,l,r), l++, r--;
	}
	swap(A,r,p);
	return r;
}

void qSort(mt *A, mt l, mt r)
{
	if(l<r)
	{
		mt m = part(A,l,r);
		qSort(A,l,m-1);
		qSort(A,m+1,r);
	}
}

void main()
{
	mt A[11] = {3,1,7,2,9,8,3,5,10,11,4};
	qSort(A,1,10);
	for(int i = 1; i<11; i++)
		printf("%d ",A[i]);
	printf("\n");
}