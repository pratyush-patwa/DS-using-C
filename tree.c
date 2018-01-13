#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* right;
	struct node* left;
};
tupedef struct node* NODEPTR;

NODEPTR insert(NODEPTR, int);
void print(NODEPTR);
int main()
{
	NODEPTR root= NULL;
	int n, i, x;
	printf("Enter the no. of elements");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);

	root= insert(root, x);
	}
	
	
return(0);
}
NODEPTR insert( NODEPTR root, int x){
	if(root== NULL)
	{
		NODEPTR temp=  NULL;
		temp= (NODEPTR)malloc(size of(struct node));
		temp->left= temp->right= NULL;
		temp->data= x;
		root=temp;
	else if(x > (root->data))
	{
		insert(root->right, x);
	}
	else if(x < (root->data))
	{
		insert(root->left, x);
	}
}



