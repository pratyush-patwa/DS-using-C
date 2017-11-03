#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;
};
typedef struct node* NODEPTR;
void ins_end(struct node* ,int);
void print(NODEPTR);
NODEPTR head;
int main(int argc, char ** argv)
{
	//NODEPTR head= NULL;
	int n, i, x;
	printf("\nEnter the no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
	ins_end(head, x);
	}
	print(head);

}
void ins_end(NODEPTR h, int x)
{
	NODEPTR new_node;
	new_node=(NODEPTR)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("\nMEMORY ALLOCATION FAILED");
	exit(1);
	}
	new_node->data=x;
	new_node->next=NULL;
	if(head==NULL)
	{
		head = new_node;
	}
	else
	{
		NODEPTR temp;
		temp= head;
		while(temp->next!=NULL)
		{
			temp= temp->next;
		}
		temp->next=new_node;
	}
	//print(head);
}

void print(NODEPTR h)
{
	NODEPTR temp;
	temp = head;
	printf("\nPRINTING LIST");
	while(temp!=NULL)
	{	printf("\n%d",temp->data);
		temp= temp->next;
	}
}
