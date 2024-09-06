/*#include<stdio.h>
#include<stdlib.h>
int que[100],n,i,j,ch,front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
printf("enter the number:");
scanf("%d",&n);
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(); break;
case 2:dequeue(); break;
case 3:display(); break;
case 4:exit(0); break;
default:printf("invalid");
}}}
void enqueue()
{
if(rear==n-1)
{
printf("full");
}
else
front=-1;
front=0;
{
printf("enter the item");
scanf("%d",&n);
rear=rear+1;
que[rear]=n;
}}
void dequeue()
{
if(front==-1)
{
printf("empty");
}
else
{
printf("del %d",que[front]);
front=front+1;
}}
void display()
{
if(front==-1)
{
printf("empty");
}
else
{
for(i=front;i<=rear;i++)
printf("%d\n",que[i]);
}}*
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int main()
{
int ch,n;
printf("enter the number");
scanf("%d",&n);
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(); break;
case 2:dequeue(); break;
case 3:display(); break;
case 4:exit(0); break;
default:printf("invalid");
}}}
struct node 
{
int data;
struct node *next;
}*front=0,*rear=0,*new,*temp;
void enqueue()
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&new->data);
if(rear==0)
{
front=rear=new;
}
else
{
rear->next=new;
rear=new;
}}
void dequeue()
{
temp=front;
if(front==0&&rear==0)
{
printf("empty");
}
else
{
front=front->next;
free(temp);
}}
void display()
{
temp=front;
if(front==0&&rear==0)
{
printf("empty");
}
else
{
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}}}*
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int n,ch;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
front=0;
rear=0;
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
while(1)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(); break;
case 2:dequeue(); break;
case 3:display(); break;
default:printf("invalid");
}}}
void enqueue()
{
struct node *new;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&n);
new->data=n;
new->next=0;
if(front==0&&rear==0)
{
front=new;
rear=new;
rear->next=front;
}
else
{
rear->next=new;
rear=new;
rear->next=front;
}
printf("add the data %d",new->data);}
void dequeue()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty");
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
}}
void display()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty");
}
else
{
while(temp->next!=front)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}}*
#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
int n,i;
printf("enter the number\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("after the sorting");
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
int i,j,k,b[10];
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
}}
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
}}*
#include<stdio.h>
 int quick(int a[],int low,int high)
{
int i,j,pivot,temp;
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
}}
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
}}*/



