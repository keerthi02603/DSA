/*#include<stdio.h>
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
printf("enter");
scanf("%[^\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case '+':sum(); break;
case '-':sub(); break;
case '*':mul(); break;
case '/':div(); break;
case '^':power(); break;
default:
top++;
stack[top]=exp[i]-48;
}}
printf("%d",stack[top]);
}
void sum()
{
int a,b,result;
a=stack[top];
top--;
b=stack[top];
top--;
result=b+a;
top++;
stack[top]=result;
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
int a,b,re;
a=stack[top];
top--;
b=stack[top];
top--;
re=b*a;
top++;
stack[top]=re;
}
void div()
{
int a,b,re;
a=stack[top];
top--;
b=stack[top];
top--;
re=b/a;
top++;
stack[top]=re;
}
void power()
{
int a,b,re;
a=stack[top];
top--;
b=stack[top];
top--;
re=b^a;
top++;
stack[top]=re;
}*/
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
printf("enter\n");
scanf("%[^\n]s",exp);
for(i=0;exp[i]!='\0';i++)
{
switch(exp[i])
{
case '+':sum(); break;
case '-':sub(); break;
case '*':mul(); break;
case '/':div(); break;
case '^':power(); break;
default:
top++;
stack[top]=exp[i]-48;
}}
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



