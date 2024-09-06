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
