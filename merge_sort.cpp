/*
* To sort array in ascending order using mergesort
*/
#include<stdio.h>
void MERGE_SORT(int A[],int l,int h);
void MERGE(int A[],int l,int m,int h);
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
	MERGE_SORT(A,0,n-1);
	printf("Sorted array is as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
void MERGE_SORT(int A[],int l,int h)
{
	int m;
	if(l<h)
	{
		m=l+(h-l)/2;			//Same as (l+h)/2 but avoids overflow for large h and l
		MERGE_SORT(A,l,m);
		MERGE_SORT(A,m+1,h);
		MERGE(A,l,m,h);
	}
}
void MERGE(int A[],int l,int m,int h)
{
	int i,j,k,n1,n2;
	n1=m-l+1;
	n2=h-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=A[l+i];
	for(j=0;j<n2;j++)
		R[j]=A[m+1+j];
	i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		A[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		A[k]=R[j];
		j++;
		k++;
	}
}
