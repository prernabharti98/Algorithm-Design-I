/*
* Traversal of graph using depth first search in adjacency list
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	struct node *next;
	int vertex;
}node;
node *G[20];		//heads of linked list
int visited[20];
int n;
void READ_GRAPH();
void INSERT(int,int);
void DFS(int);
int main()
{
	int i;
	READ_GRAPH();
	for(i=0;i<n;i++){
		visited[i]=0;
	}
	DFS(0);
	for(i=0;i<n;i++){
		if(!visited[i])
			DFS(i);
	}
	return 0;
}
void READ_GRAPH()
{
	int i,vi,vj,edges;
	printf("Enter number of vertices:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		G[i]=NULL;
	}	
	printf("Enter no. of edges:");
	scanf("%d",&edges);
	for(i=0;i<edges;i++){
		printf("Enter an edge(u,v):");
		scanf("%d%d",&vi,&vj);
		INSERT(vi,vj);
	}
}
void INSERT(int vi,int vj)
{
	node *p,*q;
	q=(node *)malloc(sizeof(node));
	q->vertex=vj;
	q->next=NULL;
	if(G[vi]==NULL)
		G[vi]=q;
	else{
		p=G[vi];
		while(p->next!=NULL)
			p=p->next;
		p->next=q;
	}
}
void DFS(int i)
{
	node *p;
	printf("\n%d",i);
	p=G[i];
	visited[i]=1;
	while(p!=NULL){
		i=p->vertex;
		if(!visited[i])
			DFS(i);
		p=p->next;
	}
}
