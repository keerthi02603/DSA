/*#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delend();
void delpos();
struct node
{
int data;
struct node *next;
}*temp,*new,*head,*prev;
int main()
{
int ch;
do
{
printf(".....operations......");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for insertbeg\n");
printf("enter 4 for insertend\n");
printf("enter 5 for insertpos\n");
printf("enter 6 for delbeg\n");
printf("enter 7 for delend\n");
printf("enter 8 for delpos\n");
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;
case 6:delbeg(); break;
case 7:delend(); break;
case 8:delpos(); break;
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the item:");
scanf("%d",&new->data);
new->next=0;
if(head==0)
{
temp=head=new;
}
else
{
temp->next=new;
temp=new;
}printf("enter 1 for go 0 for exit");
scanf("%d",&c);}}
void display()
{
temp=head;
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the number");
scanf("%d",&new->data);
new->next=0;
new->next=head;
head=new;
}
void insertend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the number");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=new;
display();}
void insertpos()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the number");
scanf("%d",&new->data);
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}

new->next=temp->next;
temp->next=new;
display();
}
void delbeg()
{
temp=head;
head=head->next;
free(temp);
display();
}
void delend()
{
temp=head;
while(temp->next!=0)
{
prev=temp;
temp=temp->next;}
prev->next=0;
display();
}
void delpos()
{
temp=head;
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
prev=temp;
temp=temp->next;
}
prev=temp->next;
temp->next=prev->next;
free(prev);
}*
#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delend();
void delpos();
struct node
{
int data;
struct node *next;
struct node *prev;
}*temp,*new,*head;
int main()
{
int ch;
do
{
printf("...operations....");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for insertbeg\n");
printf("enter 4 for insertend\n");
printf("enter 5 for insertpos\n");
printf("enter 6 for delbeg\n");
printf("enter 7 for delend\n");
printf("enter 8 for delpos\n");
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;
case 6:delbeg(); break;
case 7:delend(); break;
case 8:delpos(); break;
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
new->prev=0;
if(head==0)
{
temp=head=new;
}
else
{
temp->next=new;
new->prev=temp;
temp=new;
}printf("enter 1 for go 0 for exit");
scanf("%d",&c);}}
void display()
{
temp=head;
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}}
void insertbeg()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
new->prev=0;
head->prev=new;
new->next=head;
head=new;
display();
}
void insertend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
new->prev=0;
while(temp->next!=0)
{
temp=temp->next;
}
new->prev=temp;
temp->next=new;
temp=new;
display();
}
void insertpos()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
new->prev=0;
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
new->next=temp->next;
new->prev=temp;
temp->next=new;
display();
}
void delbeg()
{
temp=head;
head=head->next;
head->prev=0;
free(temp);
display();
}
void delend()
{
temp=head;
while(temp->next!=0)
{

temp=temp->next;
}
temp->prev->next=0;
temp=temp->next;
free(temp);
display();
}
void delpos()
{
struct node *ptr;
temp=head;
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
ptr=temp->next;
temp->next=ptr->next;
ptr->next->prev=temp;
free(ptr);
display();
}*
#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
struct node
{
int data;
struct node *next;
}*head,*temp,*new,*tail;
int main()
{
int ch;
do
{
printf(".....operations....");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for insertbeg\n");
printf("enter 4 for insertend\n");
printf("enter 5 for insertpos\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;

default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==0)
{
head=temp=new;
}
else
{
temp->next=new;
temp=new;
tail=new;
temp->next=head;
}printf("enter 1 for go 0 for exit");
scanf("%d",&c);
}}
void  display()
{
temp=head;
while(temp->next!=head)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
void insertbeg()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=head)
{
temp=temp->next;
}
new->next=head;
head=new;
temp->next=head;
display();
}
void insertend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=head)
{
temp=temp->next;
}
new->next=head;
temp->next=new;
tail=new;
}
void insertpos()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
new->next=temp->next;
temp->next=new;
display();
}*
#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void delbeg();
void delend();
void delpos();
struct node
{
int data;
struct node *next;
}*head,*temp,*new,*tail;
int main()
{
int ch;
do
{
printf("...operations....\n");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for delbeg\n");
printf("enter 4 for deltend\n");
printf("enter 5 for delpos\n");
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:delbeg(); break;
case 4:delend(); break;
case 5:delpos(); break;
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==0)
{
head=temp=new;
}
else
{
temp->next=new;
temp=new;
tail=new;
temp->next=head;
}printf("enter 1 for go 0 for exit\n");
scanf("%d",&c);
}}
void display()
{
temp=head;
while(temp->next!=head)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
void delbeg()
{
temp=head;
tail=head;

while(tail->next!=head)
{
tail=tail->next;
}
head=head->next;
tail->next=head;
free(temp);
display();
}
void delend()
{
struct node *prev;
temp=head;
while(temp->next!=head)
{
prev=temp;
temp=temp->next;
}
prev->next=head;
free(temp);
display();
}
void delpos()
{
struct node *ptr;
temp=head;
int pos,i=1;
printf("enter the position");
scanf("%d",&pos);
while(i<pos)
{
ptr=temp;
temp=temp->next;
i++;
}
ptr->next=temp->next;
temp->next=head;
free(temp);
display();
}*/
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
while((c=pop())!='(')
printf("%c",c);
}
else
{
while(priority(stack[top])>=priority(infix[i]))
{
printf("%c",pop());
}
push(infix[i]);}}
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
}



