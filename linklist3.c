#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
typedef struct node* NODEPTR;
NODEPTR ins_pos(NODEPTR, int);
NODEPTR ins_end(NODEPTR, int);
void print(NODEPTR);
int main(int argc, char** argv)
{	
	NODEPTR head =NULL;
	int n, i, x;
	printf("Enter the no. of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
//		printf("%d",x);
	head= ins_pos(head, x);
	}
	print(head);
return (0);
}
NODEPTR ins_pos(NODEPTR head, int x)
{
	NODEPTR temp=NULL;
	int  pos, count;
	NODEPTR	new_node= (NODEPTR)malloc(sizeof(struct node));
	new_node->data= x;
	new_node->next=NULL;
	
	if(head=NULL)
	{
		head= new_node;
		head->next=NULL;
	}
	else
	{
		printf("\nEnter the position for next element");
		scanf("%d",&pos);
		temp= head;
		while(temp!=NULL)
		{
			temp= temp->next;
			count++;
		if(count==pos)
		{
			temp->data =x;
			temp->next= temp;
		}
		}
	}
}
void print(NODEPTR head)
	{
		NODEPTR temp;
		temp =head;
		printf("\n printing list");
		while (temp!=NULL)
		{
			printf("\n %d", temp->data);
			temp = temp->next;
		}
	}
