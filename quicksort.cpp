/*
* To sort an array in ascending order using quicksort algorithm
*/
#include<stdio.h>
void quicksort(int A[],int p,int r);
int partition(int A[],int p,int r);
void swap(int A[],int i,int j);
int main()
{
    int A[]={6,9,1,45,9,2,89,77,4,5};
    int i,n;
    n=sizeof(A)/sizeof(A[0]);
    quicksort(A,0,n-1);
    printf("Array sorted in ascending order is as follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
void quicksort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
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
