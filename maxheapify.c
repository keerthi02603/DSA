#include<stdio.h>
#define max 50
int maxheap[max],n=0;
void insert();
void delete();
void display();
void create_maxheap();

void main()
{
create_maxheap();
int choice;
while(choice!=4)
{
printf("\n menu\n");
printf("1.insert\n 2.delete\n 3.display\n 4.exit\n");
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:insert(); break;
case 2:delete(); break;
case 3:display(); break;
case 4:printf("\n program successfully executed\n");
break;
default:printf("invalid");
}}}
void  create_maxheap()
{
int n;
printf("enter the size");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
insert();
}}
void insert()
{
printf("enter the data");
scanf("%d",&maxheap[n]);
n=n+1;
int i=n-1;
while(i>0)
{
int parent=(i-1)/2;
if(maxheap[parent]<maxheap[i])
{
int temp=maxheap[parent];
maxheap[parent]=maxheap[i];
maxheap[i]=temp;
i=parent;
}
else
{
return;
}}}
void delete()
{
int data=maxheap[0];
maxheap[0]=maxheap[n-1];
n=n-1;
int i=0;
while(i<n)
{
int largest=i;
int left=(2*i)+1;
int right=(2*i)+2;
if(left<n&&maxheap[left]>maxheap[right])
{
largest=left;
}
if(largest!=i)
{
int temp=maxheap[i];
maxheap[i]=maxheap[largest];
maxheap[largest]=temp;
i=largest;
}
else
{
return;
}}}
void display()
{
printf("data in  the maxheap");
for(int i=0;i<n;i++)
{
printf("%d\n",maxheap[i]);
}}
