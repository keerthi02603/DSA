#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct Graph
{
int numvertices;
struct node**adjlists;
int*visited;
}
struct node*createnode(int data)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->datat=data;
newnode->next=NULL;
return newnode;
}
struct Graph*creategraph(int n)
{
struct node*graph=(struct Graph*)malloc(sizeof(stuct Graph));
graph->numvertices=n;
graph->adjlists=(struct node**)malloc(n*size of(struct node));
graph->visited=(int *)malloc(n*size of(int) );
for(int i=0;i<n;i++)
{
graph->adjlists[i]=NULL;
graph->visited[i]=0;
}
return 0;
}

void addEdge(struct Graph*graph,int src,int dest)
{
struct node*newnode=createnode(dest);
newnode->next=graph->adjlists[src];
graph->adjlists[src]=newnode;
newnode=createnode(src)
newnode->next=graph->adjlists[dest];
graph->adjlists[dest]=newnode;
}

void bfs(struct Graph*graph, int startVertex)
{
int* queue=(int*)malloc(graph->numVertices*sizeof(int));
int front =0;
int rear=0;
graph->visted[startVertex]=1;
