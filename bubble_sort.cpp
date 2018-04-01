/*
* To sort array in ascending order using bubble sort
*/
#include<stdio.h>
void BUBBLE_SORT(int A[],int n);
void SWAP(int A[],int i,int j);
int main()
{
	int A[]={5,9,1,10,7};
	int n,i;
	n=sizeof(A)/sizeof(A[0]);
	printf("Array before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	BUBBLE_SORT(A,n);
	printf("Array after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
void BUBBLE_SORT(int A[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
				SWAP(A,j,j+1);
		}
	}
}
void SWAP(int A[],int i,int j)
{
	int temp;
	temp=A[i];
	A[i]=A[j];
	A[j]=temp;
}
