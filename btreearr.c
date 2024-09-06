#include<stdio.h>
void inorder(int);
void preorder(int);
void postorder(int);
char tree[10];
int root(char key)
{
if(tree[0]!='\0')
{
printf("empty:");
}
else
{
tree[0]=key;
return 0;
}
}
int left(char key,int i)
{
if(tree[i]=='\0')
{
printf("you cannot find the element\n");
}
else
{
 tree[(2*i)+1]=key;
return 0;
}}
int right(char key,int i)
{
if(tree[i]=='\0')
{
printf("you cannot find the element");
}
else
{
tree[(2*i)+2]=key;
return 0;
}}
void printtree()
{
for(int j=0;j<10;j++)
{
if(tree[j]!='\0')
{
printf("%c",tree[j]);
}
else
{
printf("_");
}}}
int main()
{
root('a');
left('b',0);
right('c',0);
left('d',1);
right('e',1);
left('z',2);
right('f',2);
printtree();
printf("\n inorder is\n");
inorder(0);
printf("\npreorder\n");
preorder(0);
printf("\n postorder\n");
postorder(0);
}
void inorder(int i)
{
if(tree[i]!='\0')
{
inorder((2*i)+1);
printf("%c",tree[i]);
inorder((2*i)+2);
}}
void preorder(int i)
{
if(tree[i]!='\0')
{
printf("%c",tree[i]);
preorder((2*i)+1);
preorder((2*i)+2);
}}
void postorder(int i)
{
if(tree[i]!='\0')
{
postorder((2*i)+1);
postorder((2*i)+2);
printf("%c",tree[i]);
}}

