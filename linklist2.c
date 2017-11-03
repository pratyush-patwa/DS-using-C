#include<stdio.h>
#include<stdlib.h>
	struct node
	{
	int data;
	struct node *next;
	};
	typedef struct node * NODEPTR;
struct node* ins_end(NODEPTR,int);
void print(NODEPTR);
struct node* ins_start(NODEPTR, int);
int count(NODEPTR head);
NODEPTR del_end(NODEPTR, int);
NODEPTR del_start(NODEPTR, int);

int main(int argc, char** argv)
{
	NODEPTR head=NULL;
	int n, i, x, j, l;
	printf("Enter the no. of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);

		head = ins_end(head, x);
			}

	for(j=0;j<n;j++){
		scanf("%d",&x);

		head = ins_start(head, x);
		}

	printf("\nORIGINAL LIST");
	print(head);
head= del_end(head,x);
	printf("\nAfter delesting last node");
	print(head);
head = del_start(head,x);
	printf("After deleting start node");
	print(head);
l= count(head);
printf("\nThe no of nodes are =%d",l);
}

	
struct node* ins_end(NODEPTR head, int x)
{
	NODEPTR new_node;
	new_node=(NODEPTR)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("\nMemory allcation aborted");
		exit(1);
	}

	new_node->data= x;
	new_node->next=NULL;

	if(head == NULL)
	{
		head= new_node;

	}
	else
	{
		NODEPTR temp;
		temp= head;
		while(temp->next!=NULL)
		{
			temp= temp->next;
		}
		temp->next = new_node;
	}

	return head;
}

struct node* ins_start(NODEPTR head, int x)
{
	
	NODEPTR new_node= (NODEPTR)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("\nMemory allocatio aborted");
	}
	new_node->data = x;
	new_node->next =NULL;
	if(head==NULL)
	{
		 head= new_node;
	}
	else
	{
	
		new_node->next= head;
		head = new_node;
	}
	return head;
}
int count(NODEPTR head)
{
	int counter=0;
	while(head!=NULL)
	{

	head=head->next;
	counter++;
	}
	return counter;
}
void print(NODEPTR head)
{
	NODEPTR temp;
	temp = head;
	printf("\n printing list");
	while(temp!= NULL)
	{	
		printf("\n%d",temp->data);
		temp = temp->next;
	}
}
NODEPTR del_end(NODEPTR head, int x)
{

	NODEPTR temp;
	temp= head;
	while((temp->next)->next!=NULL)
	{
	 temp= temp->next;
	}
	temp->next=NULL;
return head;
}

NODEPTR del_start(NODEPTR head, int x)
{

	NODEPTR temp;
	temp= head;
	head=head->next;
return head;
}

