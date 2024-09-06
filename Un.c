/*#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int queue[MAX_VERTICES];
int front=-1,rear=-1;
int enqueue(int vertex)
{
if(rear==MAX_VERTICES-1)
{
printf("full");
//return;
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
if(graph[current][i]==1 && !visited[i]);
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
printf("enter the matrix:");
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
printf("enter the matrix size:");
scanf("%d",&n);
printf("enter the adjacency matrix:");
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
printf("\n");
return 0;
}*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(char element)
{
stack[++top]=element;
}
char pop()
{
if(top==-1)
{
return -1;
}
return stack[top--];
}
int priority(char x)
{
if(x=='('||x==')')
return 0;
else if(x=='+'||x=='-')
return 1;
else if(x=='*'||x=='/')
return 2;
else if(x=='^')
return 3;}
void postfix(char infix[])
{
char c;
int i;
for(int i=0;infix[i]!='\0';i++)
{
if(isalnum(infix[i]))
{
printf("%d",infix[i]);
}
else if(infix[i]=='(')
{
push(infix[i]);
}
else if(infix[i]==')')
{
while((c=pop())!='(')
printf("%c",c);
}
else
{
while(priority(stack[top])>=priority(infix[i]))
{
printf("%c",pop());
}
push(infix[i]);
}}
while(top>=0)
printf("%c",pop());
}
int main()
{
char infix[100];
printf("enter the expression");
scanf("%s",infix);
postfix(infix);
return 0;
}*
#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
struct node *left;
struct node *right;
}*root==NULL,*temp,*new;
struct node *create(int key)
{
new=(struct node *)malloc(sizeof(struct node));
new->key=key;
new->left=new->right=NULL;
return new;
}
struct node *insert(struct node *root,int key)
{
if(root==NULL)
{
return create(key);
}
else if(key<root->key)
{
root->left=insert(root->left,key);
}
else if(key>root->key)
{
root->right=insert(root->right,key);
}}
struct node *delete(struct node *root,int key)
{
if(root==NULL)
{
return root;
}
else if(key<root->key)
{
root->left=delete(root->left,key);
}
else if(key>root->key)
{
root->right=delete(root->right,key);
}
else
{
if(root->left==NULL)
{
temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL)
{
temp=root->left;
free(root);
return temp;
}}}
struct node *search(struct node *root,int key)
{
if(root==-1||root->key==key)
{
return root;
}
else if(key<root->key)
{
return search(root->left,key);
}
return search(root->right,key);
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d",root->key);
inorder(root->right);
}}
int main()
{
int ch,key;
while(1)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.inorder\n");
printf("enter the ch");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter to insert the element\n");
scanf("%d",&key);
root=insert(root,key); break;
case 2:printf("enter to delete the data\n");
scanf("%d",&key);
root=delete(root,key); break;
case 3:printf("enter the value to search\n");
scanf("%d",&key);
if(search(root,key)!=0)
{
printf("found %d",key);
}
else
{
printf("not found");
}
break;
case 4:printf("inorder");
root(inorder);
break;
case 5:exit(0); break;
default:printf("invalid");
}*
#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("sorting\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}}
void mergesort(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}}
void merge(int a[],int low,int mid,int high)
{
int i,j,k;
int b[10];
i=low;
j=mid+1;
k=low;
while(i<=mid&&j<=high)
{
if(a[i]<=a[j])
{
b[k++]=a[i++];
}
else
{
b[k++]=a[j++];
}
}
while(i<=mid)
{
b[k++]=a[i++];
}
while(j<=high)
{
b[k++]=a[j++];
}
for(k=low;k<=high;k++)
{
a[k]=b[k];
}}
#include<stdio.h>
void quick(int a[],int low,int high)
{
int pivot,temp,i,j;
if(low<high)
{
i=low;
j=high;
pivot=low;
while(i<j)
{
while(a[i]<=a[pivot])
i++;
while(a[j]>a[pivot])
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[j];
a[j]=a[pivot];
a[pivot]=temp;
quick(a,low,j-1);
quick(a,j+1,high);
}}
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("after the sorting");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}}



