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
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);

int main()
{
	int choice;
	do
	{
		printf("\n\nOperations on a Singly Linked List\n");
		printf("1.Create a Linked List \n");
		printf("2.Display Linked List \n");
		printf("3.Add a node at the beginning \n");
		printf("4.Add a node at the end \n");
		printf("5.Add a node after a given node \n");
		printf("6.Delete a node from the beginning  \n");
		printf("7.Delete a node from the end \n");
		printf("8.Delete a given node \n");
		printf("9.Exit \n");
		printf("Enter your Choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	start=create(start);
				printf("Singly Linked List is Created\n");
				break;
			case 2:	start=display(start);
				break;
			case 3:	start=insert_beg(start);
				printf("A node is inserted at the beginning\n");
				break;
			case 4:	start=insert_end(start);
				printf("A node is inserted at the end\n");
				break;
			case 5:	start=insert_after(start);
				printf("A node is inserted after the given node\n");
				break;
			case 6:	start=delete_beg(start);
				printf("A node is deleted from the beginning\n");
				break;
			case 7:	start=delete_end(start);
				printf("A node is deleted from the end\n");
				break;
			case 8:	start=delete_node(start);
				printf("The node which contains the given value is deleted\n");
				break;
		}
	}while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8);
	return 0;
}
struct node *create(struct node *start)
{
	struct node *new_node,*current;
	int num;
	printf("Enter -1 to stop creating more nodes\n");
	printf("Enter the data\n");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			current=start;
			while(current->next!=NULL)
				current=current->next;
			current->next=new_node;
			new_node->next=NULL;
		}
		printf("Enter the data\n");
		scanf("%d",&num);
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *current;
	current=start;
	printf("Now the Linked List contains: \n");
	while(current!=NULL)
	{
		printf("%d\t",current->data);
		current=current->next;
	}
	printf("\n");
	return start;
}

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("Enter the data which has to be inserted at the beginning\n");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=start;
	start=new_node;

	return start;
}

struct node *insert_end(struct node *start)
{
	struct node *new_node,*current;
	int num;
	printf("Enter the data which has to be inserted at the end \n");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=NULL;
	current=start;
	while(current->next!=NULL)
		current=current->next;
	current->next=new_node;

	return start;
}

struct node *insert_after(struct node *start)
{
	struct node *new_node,*current;
	int num,val;
	printf("Enter the value after which node has to inserted\n");
	scanf("%d",&val);
	printf("Enter the data to be inserted\n");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	current=start;
	while(current->data!=val)
		current=current->next;
	new_node->next=current->next;
	current->next=new_node;

	return start;
}

struct node *delete_beg(struct node *start)
{
	if(start==NULL)
    {

        printf("There is no linked list");

    }
    else
    {


	struct node *current;
	current=start;
	start=start->next;
	free(current);
	return start;
    }
}

struct node *delete_end(struct node *start)
{
	struct node *current,*previous;
	current=start;
	while(current->next!=NULL)
	{
		previous=current;
		current=current->next;
	}
	previous->next=NULL;
	free(current);
	return start;
}

struct node *delete_node(struct node *start)
{
	struct node *current,*previous;
	int val;
	printf("Enter the value of the node which has to be deleted\n");
	scanf("%d",&val);
	current=start;
	while(current->data!=val)
	{
		previous=current;
		current=current->next;
	}
	previous->next=current->next;
	free(current);
	return start;
}



