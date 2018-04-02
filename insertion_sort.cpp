/*
* To sort array in ascending order using insertion sort
*/
#include<stdio.h>
void INSERTION_SORT(int A[],int n);
int main()
{
	int A[]={4,9,1,10,2,19};
	int i,n;
	n=sizeof(A)/sizeof(A[0]);
	printf("Unsorted array is as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	INSERTION_SORT(A,n);
	printf("Sorted array is as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
void INSERTION_SORT(int A[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0 && A[j]>key)
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=key;
	}
}
