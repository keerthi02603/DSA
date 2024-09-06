#include<stdio.h>//stack using with an array!!
#include<stdlib.h>
int stack[100],i,j,choice,top=-1,n;
void push();
void pop();
void display();
int main()
{
printf("enter the number");
scanf("%d",&n);
printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice\n");
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
default:printf("invalid\n");
}}}
void push()
{
int i;
if(top==n-1)
{
printf("stack is full\n");
}
else
{
printf("enter the item\n");
scanf("%d",&i);
top=top+1;
stack[top]=i;
}
}
void pop()
{
if(top==-1)
{
printf("empty");
}
else
{
printf("item delete from the stack if %d\n\n",stack[top]);
top--;
}
}
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
printf("\n");
}
}
