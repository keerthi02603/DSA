/*#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void display();
int choice,item;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
front=0;
rear=0;
printf("choices are\n");
printf("1.enque\n");
printf("2.deque\n");
printf("3.display\n");
while(1)
{
printf("enter the choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enque();
break;
case 2:deque();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid\n");
}
}
}
void enque()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the item\n:");
scanf("%d",&item);
newnode->data=item;
newnode->next=0;
if(rear==0)
{
front=newnode;
rear=newnode;
rear->next=front;
}
else 
{
rear->next=newnode;
rear=newnode;
rear->next=front;
printf("added successfully %d\n",newnode->data);
}
}
void deque()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("queue is empty\n");
}
else if(front==rear)
{
front=0;
rear=0;
free(temp);
}
else
{
front=front->next;
rear->next=front;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty\n");
}
else
{
while(temp->next!=front)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
}
#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void display();
int choice,item;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
printf("choices are\n");
printf("1.enque\n");
printf("2.deque\n");
printf("3.display\n");
printf("4.exit\n");
while(1)
{
printf("enter the choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enque();
break;
case 2:deque();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid\n");
}
}
}
void enque()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter item;\n");
scanf("%d",&item);
newnode->data=item;
newnode->next=0;
if(rear==0)
{
front=newnode;
rear=newnode;
rear->next=front;
}
else
{
rear->next=newnode;
rear=newnode;
printf("added sucessfully%d\n",item);
}
}
void deque()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty queue\n");
}
else if(front==rear)
{
front=0;
rear=0;
free(temp);
}
else
{
front=front->next;
rear->next=front;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty queue\n");
}
else
{
while(temp->next!=front)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
}
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
printf("overflow\n");
return;
}
if(front==-1)
{
front=0;
rear++;
queue[rear]=vertex;
}
}
int dequeue()
{
if(front==-1||front>rear)
{
printf("underflow\n");
return -1;
}
int vertex=queue[front];
front++;
if(front>rear)
{
front=rear=-1;
return vertex;
}
}
void bfs(int start,int n)
{
int current;
enqueue(start);
visited[start]=true;
printf("bfs traversal\n");
while(front!=-1)
{
current = dequeue();
printf("%d",current);
for(int i=0;i<n;i++)
{
if(graph[current][i]==1&&!visited[i])
{
enqueue(i);
visited[i]=true;
}
}
}
printf("\n");
}
int main()
{
int n;
printf("enter no of vertices:\n");
scanf("%d",&n);
printf("enter the adjacency matrix:\n");
for(int i=0;i<n;i++){
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter the starting vertex:\n");
scanf("%d",&start_vertex);
bfs(start_vertex,n);
return 0;
}
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
return-1;
}
return stack[top--];
}
int priority(char x)
{
if(x=='('||x==')')
return 0;
if(x=='+'||x=='-')
return 1;
if(x=='*'||x=='/')
return 2;
if(x=='^')
return 3;
}
void postfix(char infix[])
{
char c;
int i;
for(i=0;infix[i]!='\0';i++)
{
if(isalnum(infix[i]))
{
printf("%c",infix[i]);
}
else if(infix[i]=='(')
{
printf("%c",c);
}
else{
while(priority(stack[top])>=priority(infix[i]))
{
printf("%c",pop());
}
push(infix[i]);
}
}
while(top>=0)
printf("%c",pop());
}
int main()
{
char infix[100];
printf("enter the infix expression\n");
scanf("%s",infix);
postfix(infix);
return 0;
}
#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
void dfs(int vertex,int n)
{
visited[vertex]=true;
printf("%d",vertex);
for(i=0;i<n;i++)
{
if(graph[vertex][i]==1&&!visited[i])
{
dfs(i,n);
}
}
}
int main()
{
int n;
printf("enter the no of vertices:\n");
scanf("%d",&n);
printf("enter the adjaceny matrix:\n");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter the starting vertex:\n");
scanf("%d",&start_vertex);
printf("dfs traversal");
dfs(start_vertex,n);
printf("\n");
return 0;
}
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
}
}
int main()
{
int n,i;
printf("enter the num:\n");
scanf("%d",&n);
int a[n];
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("after sorting:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
int n,i;
printf("enter the size:\n");
scanf("%d",&n);
int a[n];
printf("enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void mergesort(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void merge(int a[],int low,int mid,int high)
{
int i,j,k;
int b[100];
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
while(j<=mid)
{
b[k++]=a[j++];
}
for(k=low;k<=high;k++)
{
a[k]=b[k];
}
}
#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void display();
int choice,item;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
front=0;
rear=0;
printf("choioces are\n");
printf("enque\n");
printf("deque\n");
printf("display\n");
while(1)
{
printf("enter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enque();
break;
case 2:deque();
break;
case 3:display();
break;
case 4: exit(0);
break;
default:printf("invalid\n");
}
}
}
void enque()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter an item:");
scanf("%d",&item);
newnode->data=item;
newnode->next=0;
if(rear==0)
{
front=newnode;
rear=newnode;
rear->next=front;
}
else
{
rear->next=newnode;
rear=newnode;
rear->next=front;
}
printf("added sucessfully\n");
}
void deque()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty set\n");
}
else if(front==rear)
{
front=0;
rear=0;
free(temp);
}
else
{
front=front->next;
rear->next=front;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("queue is empty\n");
}
else
{
while(temp->next!=front)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
}
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
}
}
int main()
{
int n,i;
printf("enter size of an arrray:\n");
scanf("%d",&n);
int a[n];
printf("enter elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("sorted elements:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
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
if(graph[vertex][i]==1&&!visited[i])
{
dfs(i,n);
}
}
}
int main()
{
int n;
printf("enter number of vertices:");
scanf("%d",&n);
printf("enter adjacency matrix:");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter start_vertex");
scanf("%d",&start_vertex);
printf("DFS Traversal");
dfs(start_vertex,n);
printf("\n");
return 0;
}
#include<stdio.h>
#include<stdbool.h>
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int queue[MAX_VERTICES];
int front=-1,rear=-1;\
void enqueue(int vertex)
{
if(rear==MAX_VERTICES-1)
{
printf("queue overflow\n");
return;
}
if(front==-1)
{
front=0;
rear++;
queue[rear]=vertex;
}
}
void dequeue()
{
if(front==-1||front>rear)
{
printf("queue is underflow\n");
return -1;
}
int vertex=queue[front];
front++;
front=rear=-1;
return vertex;
}
void bfs(int start,int n)
{ 
int current;
enqueue(start);
visited[vertex]=true;
printf("bfs traversal");
while(front!=-1)
{
current=dequeue();
printf("%d",current);
for(i=0;i<n;i++)
{
if(graph[current][i]==-1&&!visited[i])
{
enqueue(i);
 visited[i]=true;
 }
 }
 }
 #include<stdio.h>
 #include<stdlib.h>
 void enqueue();
 void dequeue();
 void display();
 int choice,item;
 struct node
 {
 int data;
 struct node *next;
 }*front,*rear;
 int main()
 {
 front=0;
 rear=0;
 printf("enqueue\n");
 printf("dequeue\n");
 printf("display\n");
 while(1)
 {
printf("enter choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid\n");
}
}
}
void enqueue()
{
struct node *newnode;
newnode=malloc(sizeof(struct node));
printf("enter item\n");
scanf("%d",&item);
newnode->data=item;
newnode->next=0;
if(rear==0)
{
front=newnode;
rear=newnode;
rear->next=front;
}
else
{
rear->next=newnode;
rear=newnode;
rear->next=front;
}
printf("added data successfully\n");
}
void dequeue()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("queue is empty\n");
}
else if(front==rear)
{
front=0;
rear=0;
free(temp);
}
else
{
front=front->next;
rear->next=front;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("queue is empty\n");
}
else
{
while(temp->next!=front)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
}
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
int dequeue()
{
if(front==-1||front>rear)	
{
printf("queue is underflow\n");
return -1;
}
int vertex=queue[front];
front++;
if(front>rear)
front=rear=-1;
return vertex;
}
void bfs(int start,int n)
{
int current;
enqueue(start);
visited[start]=true;
printf("bfs travesal");
while(front!=-1){
current = dequeue();
printf("%d",current);

for(int i=0;i<n;i++)
{
if(graph[current][i]==1&&!visited[i])
{
enqueue(i);
visited[i]=true;
}
}
}
printf("\n");
}
int main()
{
int n;
printf("enter number of vertices:");
scanf("%d",&n);
printf("adjacency matrix:");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter starting vertex:");
scanf("%d",&start_vertex);
bfs(start_vertex,n);
return 0;
}
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int main()
{
int n,choice;
printf("enter the number:");
scanf("%d",&n);
printf("1.push\n,2.pop\n,3.display\n,4.exit\n");
while(1)
{
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("invalid");
}
}
}
struct node
{
int data;
struct node *next;
}*new,*temp,*top=NULL;
void push()
{
new=malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&new->data);
if(top=n-1)
{
printf("stack is full");
}
else
{
new->next=top;
top=new;
}
}
void pop()
{
if(top==NULL)
{
printf("stack is empty");
}
else
{
temp=top;
temp=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
{
printf("empty");
}
else
{
temp=top;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}

#include<stdio.h>
#include<math.h>
char stack[20];
int top=-1;
int push(int);
int pop();
void sum();
void sub();
void mul();
void div();
void power();
int main()
{
int i;
char exp[20];
printf("enter expression:");
scanf("%[^\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case '+':sum();
break;
case '-':sub();
break;
case '*':mul();
break;
case '/':div();
break;
case '^':power();
break;
default:
top++;
stack[top]=exp[i]-48;
}
}
printf("%d",stack[top]);
}
void sum()
{
int a,b,res;
a=stack[top];
top--;
b=stack[top];
top--;
res=b+a;
top++;
stack[top]=res;
}
void sub()
{
int a,b,res;
a=stack[top];
top--;
b=stack[top];
top--;
res=b-a;
top++;
stack[top]=res;
}
void mul()
{
int a,b,res;
a=stack[top];
top--;
b=stack[top];
top--;
res=b*a;
top++;
stack[top]=res;
}
 void div()
{
int a,b,res;
a=stack[top];
top--;
b=stack[top];
top--;
res=b/a;
top++;
stack[top]=res;
}
void power()
{
int a,b,res;
a=stack[top];
top--;
b=stack[top];
top--;
res=b^a;
top++;
stack[top]=res;
}

#include<stdio.h>
#include<math.h>
char stack[20];
int top=-1;
int push(int);
int pop();
void sum();
void sub();
void mul();
void div();
void power();
int main()
{
int i;
printf("enter the expression:");
scanf("%[^\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i]);
{
case '+':sum();
break;
case '-':sub();
break;
case '*':mul();
break;
case '/':div();
break;
case '^':power();
break;
default:
top++;
stack[top]=exp[i]-48;
}
}
printf("%d",stack[top]);
}
void sum()
{
int a,b,res;
a=stack[top];
top--;
b=stack[top];
top--;
res=b+a;
top++;
stack[top]=res;
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[top];
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
return stack[top--]
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
return 3;
}
void postfix(infix[])
{
char c;
int i
for(i=0;infix[i]!='\0';i++)
{
if(isalnum(infix[i]))
{
printf("%c",infix[i]);
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
while(priority(stack[top]>=priority(infix[i]))
{
printf("%c",pop());
}
push(infix[i]);
}
}
while(top>=0)
printf("%c",pop());
int main()
{
char infix[100];
printf("enter infix expression:");
scanf("%s",infix)

#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
int n;
printf("enter size of array:");
scanf("%d",&n);
int a[n];
printf("enter elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void mergesort(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void merge(int a[],int low,int mid,int high)
{
int i,j,k;
int b[100];
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
}
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
struct node *left;
struct node *right;
}*root=NULL,*temp,*new;
struct node *create(str
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_position(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delter_position(struct node *);
int main()
{
int choice;
do
{
printf("operations on a single linked list:\n");
printf("1.create a linked list\n");
printf("2.display a linked list\n");
printf("3.exit\n");
printf("enter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:start=create(start);
printf(" singly linked list is created\n");
break;
case 2:start=display(start);
printf(" singly linked list is displayed\n");
break;
}
}
while(choice==1||choice==2||choice==3);
return 0;
}
struct node *create(struct node *start)
{
struct node *new-node,*current;
init num;
printf("enter -1 to stop creating more nodes\n");
printf("enter data:");
scanf("%d",&num);
while(num!=-1)
{
new-node=(struct node *)mallloc(sizeof(struct node));
new-node->data=num;
if(start==NULL)
{
newnode->next=NULL;
start=newnode;
}
else
{
current=start;
while(current->next!=NULL)
current=current->next;
current->next=newnode;
newnode->next=NULL;
}
printf("enter data\n");
scanf("%d",&num);
}
return start;
}
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
if(graph[vertex][i]==1&&!visited[i])
{
dfs(i,n);
}
}
}
int main()
{
int n;
printf("enter the number of vertices:");
scanf("%d",&n);
printf("enter adjacency matrix\n");
for(int i=0;i<n;i++)
{
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter starting vertex:");
scanf("%d",&start_vertex);
printf("dfs traversal:");
dfs(start_vertex,n);
printf("\n");
return 0;
}
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
printf("queue overflow\n");
return;
}
if(front==-1)
{
front=0;
rear++;
queue[rear]=vertex;
}
}
int dequeue()
{
if(front==-1||front>rear)
{
printf("undeflow\n");
return -1;
}
else
{
int vertex=queue[front];
front++;
if(front>rear)
front=rear=-1;
return vertex;
}
}
void bfs(int start,int n)
{
int current;
enqueue(start);
visited[start]=true;
printf("bfs traversa\n");
while(front!=-1)
{
current=dequeue();
printf("%d",current);
for(int i=0;i<n;i++)
{
if(graph[current][i]==1&&!visited[i])
{
enqueue(i);
visited[i]=true;
}
}
}
printf("\n");
}
int main()
{
int n;
printf("enter number of vertices:");
scanf("%d",&n);
printf("enter adjacency matrix:");
for(int i=0;i<n;i++){
visited[i]=false;
for(int j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
int start_vertex;
printf("enter starting vertex:");
scanf("%d",&start_vertex);
bfs(start_vertex,n);
return 0;
}
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
else if(x=='*'||x=='/');
return 2;
else if(x=='^')
return 3;
}
void postfix(char infix[])
{
char c;
int i;
for(i=0;infix[i]!='\0';i++)
{
if(isalnum(infix[i]))
{
printf("%c",infix[i]);
}
else if(infix[i]=='(')
{
push(infix[i]);
}
else if(infix[i]==')')
{
while((c=top())!='(')
printf("%c",c);
}
else
{
while(priority(stack[top])>=priority(infix[i]))
{
printf("%c",pop());
}
push(infix[i]);
}
}
while(top>=0)
{
printf("%c",pop());
}
}
int main()
{
char infix[100];
printf("enter the infix expression\n");
scanf("%s",infix);
postfix(infix);
return 0;
}
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
return 3;
}
void postfix(char infix[])
{
char c;
int i;
for(i=0;infix[i]!='\0';i++)
{
if(isalnum(infix[i]))
{
printf("%c",infix[i]);
}
else if(infix[i]=='(')
{
push(infix[i]);
}
else if(infix[i]==')')
{
while((c=top()!='(')
printf("%c",c);
}
else
{
while(priority(stack[top])>=priority(infix[i]))
{
printf("%c",pop());
}
push(infix[i]);
}
}
while(top>=0)
{
printf("%c",pop());
}
}
int main()
{
char infix[100];
printf("enter the infix expression:");
scanf("%s",infix);
postfix(infix);
return 0;
}

#include<stdio.h>
#include<math.h>
char stack[20];
int top=-1;
int push(int);
int pop();
void sum();
void sub();
void mul();
void div();
void power();
int main()
{
int i;
char exp[20];
printf("enter expression:");
scanf("%[\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case '+':sum();
break


default:
top++;
stack[top]=exp[i]-48;
}
}
printf("%d",stack[top]);
}
void sum()
{
int a,b,res;
a=stack[top];
top--;b=stack[top];
top--;
res=b+a;
top++;
stack[top]=res;

#include<stdio.h>
#include<math.h>
char stack[20]
int top=-1;
int push(int);
int pop();
void sum();
void sub();
void mul();
void div();
void power();
int main()
{
int i;
char exp[20];
printf("enter expression:");
scanf("%[\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case


default:
top++;
stack[top]=exp[i]-48;
}
}
printf("%d",stack[top]);
}
#include<stdio.h>
#include<stdlib.h>
void quick[int a[],int low,int high)
{
int pivot,temp,i,j;
if(low<high)
{
i=low;
j=high;
pivot=low;
while(i<j)
{
while(a[i]>=a[pivot])
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
}
}
int main()
{
int i;
printf("enter  the number:");
scanf("%d",&n);

#include<stdio.h>
void mergesort(int a[],int,int)
void merge(int a[],int,int,int)
void mergesort(int a[],int kow,int high)
{
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,*/
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int choice,item;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
front=0;
rear=0;
printf("choices\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n);
while(1)
{
printf("enter choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;


void enq







