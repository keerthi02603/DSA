/*#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int queue[MAX_VERTICES];
int front=-1,rear=-1;
void enqueue(int vertex)
{
if(rear==MAX_VERTICES-1)
{
printf("full");
return;
}
if(front==-1)
front=0;
rear++;
queue[rear]=vertex;
}
int dequeue()
{
if(front==-1||front>rear)
{
printf("empty");
return -1;
}
int vertex=queue[front];
front++;
if(front>rear)
{
front=rear=-1;
return vertex;
}}
void bfs(int start,int n)
{
int current;
enqueue(start);
visited[start]=true;
while(front!=-1)
{
current=dequeue();
printf("%d",current);
for(int i=0;i<n;i++)
{
if(graph[current][i]==1 && !visited[i])
{
enqueue(i);
visited[i]=true;
}}}printf("\n");
}
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printf("bfs....");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}}
int start_vertex;
printf("enter  the starting vertex");
scanf("%d",&start_vertex);
bfs(start_vertex,n);
return 0;
}*
#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
void dfs(int vertex,int n)
{
visited[vertex]=true;
printf("%d",vertex);
for(int i=0;i<n;i++)
{
if(graph[vertex][i]==1 && !visited[i])
{
dfs(i,n);
}}}
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
printf("enter the dfs");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}}
int start_vertex;
printf("enter the vertex");
scanf("%d",&start_vertex);
dfs(start_vertex,n);
return 0;
}*/



