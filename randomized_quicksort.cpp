/*
* To sort an array in ascending order using randomized quicksort to obtain good expected performance over all inputs
*/
#include<stdio.h>
#include<stdlib.h>
void randomized_quicksort(int A[],int p,int r);
int randomized_partition(int A[],int p,int r);
int partition(int A[],int p,int q);
void swap(int A[],int i,int j);
int main()
{
	int A[]={6,9,3,90,1,8,15,4,8,10};
	int i,n;
	n=sizeof(A)/sizeof(A[0]);
	randomized_quicksort(A,0,n-1);
	printf("Array sorted in ascending order is as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
void randomized_quicksort(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=randomized_partition(A,p,r);
		randomized_quicksort(A,p,q-1);
		randomized_quicksort(A,q+1,r);
	}
}
int randomized_partition(int A[],int p,int r)
{
	int i;
	//i=p+rand()/(RAND_MAX/(r-p+1)+1);
	i=rand()%(r-p+1)+p;
	swap(A,i,r);
	return partition(A,p,r);
}
int partition(int A[],int p,int r)
{
	int x,i,j;
	x=A[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(A[j]<=x)
		{
			i=i+1;
			swap(A,i,j);
		}
	}
	swap(A,i+1,r);
	return i+1;
}
void swap(int A[],int i,int j)
{
	int temp;
	temp=A[i];
	A[i]=A[j];
	A[j]=temp;
}
