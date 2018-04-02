/*
* To sort array in ascending order using selection sort
*/
#include<stdio.h>
void SELECTION_SORT(int A[],int n);
void SWAP(int A[],int i,int j);
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
	SELECTION_SORT(A,n);
	printf("Sorted array is as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
void SELECTION_SORT(int A[],int n)
{
	int i,j,min_index;
	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min_index])
				min_index=j;
		}
		if(min_index!=i)
			SWAP(A,i,min_index);
	}
}
void SWAP(int A[],int i,int j)
{
	int temp;
	temp=A[i];
	A[i]=A[j];
	A[j]=temp;
}
