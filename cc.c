/*#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int main()
{
int n,i;
printf("enter the number:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
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
int i,j,k,b[10];;
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
}}*/
/*#include<stdio.h>
 void quick(int a[],int low,int high)
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
printf("enter the number:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("after the sorting elements:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}}*
#include<stdio.h>
#include<stdlib.h>
int stack[100],i,j,n,ch,top=-1;
void push();
void pop();
void display();
int main()
{
printf("enter the number:");
scanf("%d",&n);
printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push(); break;
case 2:pop(); break; 
case 3:display(); break;
case 4:exit(0);
default:printf("invalid");
}}}
void push()
{
if(top==n-1)
{
printf("full of the stack:");
}
else
{
printf("enter the item:");
scanf("%d",&i);
top=top+1;
stack[top]=i;
}}
void pop()
{
if(top==-1)
{
printf("empty");
}
else
{
printf("deleted item is %d",stack[top]);
top--;
}}
void display()
{
if(top==-1)
{
printf("empty");
}
else
{
for(j=top;j>=0;j--)
printf("%d",stack[j]);
}}*/
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int main()
{
int n,ch;
printf("enter the number:");
scanf("%d",&n);
printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
while(1)
{
int n,ch;
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push(); break;
case 2:pop(); break;;
case 3:display(); break;
case 4:exit(0);
default:printf("invalid");
}}}
struct node
{
int data;
struct node *next;
}*top=NULL,*new,*temp;
void push()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the item:");
scanf("%d",&new->data);
new->next=top;
top=new;
}
void pop()
{
if(top==NULL)
{
printf("empty");
}
else
{
temp=top;
top=top->next;
free(temp);
}}
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
}}}







