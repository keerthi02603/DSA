#include<stdio.h>
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
printf("queue is overflow\n");
return;
}
if(front==-1)
front=0;
rear++;
queue[rear]=vertex;
}

int deque()
{
if(front==-1||front>rear)
{
printf("queue is underflow\n");
return -1;
}
int vertex=queue[front];
front++;
if(front>rear)
rear=front=-1;
return vertex;
}

void bfs(int start,int n)
{
int current;
enqueue(start);
visited[start]=true;

printf("BFS traversal: ");
while(front!=-1)
{
current=deque();
printf("%d",current);

for(int i=0;i<n;i++)
{
if(graph[current][i]==1&&!visited[i])
{
enqueue(i);
visited[i]=true;
//enqueue(i);
}
}
}
printf("\n");
}
int main()
{
int n;
printf("enter the number of vertices\n: ");
scanf("%d",&n);
printf("enter the adjecency matrix\n");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter the stating vertex\n");
scanf("%d",&start_vertex);

bfs(start_vertex,n);
return 0;
}
