/*
* Traversal of graph using depth first search in adjacency matrix
*/
#include<stdio.h>
int G[10][10],visited[10],n;
void DFS(int);
int main()
{
	int i,j;
	printf("Enter number of vertices:");
	scanf("%d",&n);
	printf("Enter corresponding adjacency matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&G[i][j]);
		}
	}
	for(i=0;i<n;i++){
		visited[i]=0;
	}
	printf("The graph is traversed as follows in depth first search:\n");
	DFS(0);
	for(i=0;i<n;i++){
		if(!visited[i])
			DFS(i);
	}
	return 0;
}
void DFS(int i)
{
	int j;
	printf("%d\n",i);
	visited[i]=1;
	for(j=0;j<n;j++){
		if(!visited[j] && G[i][j]==1)
			DFS(j);
	}
}
