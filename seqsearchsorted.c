#include<stdio.h>
int seqsearch(int a[], int key, int n);
int main(int argc, char **argv)
{
	int a [50],n,key,i;
	printf("\nNO.of elements");
	scanf("%d",&n);
	printf("\nEnter the numbers");
	for(i=0;i<n;i++){

	scanf("%d",&a[i]);
	}
	printf("\nElement to be searched");
	scanf("%d",&key);

	i=seqsearch(a,key,n);
	if(i==-1){
		printf("\n NOT FOUND");
	}
	else{
		printf("\nThe element is found at %d position",i+1);
	}
	return 0;
}
int seqsearch( int a[], int key, int n)
{
	int i = 0;
	while (i<n && key> a[i])
	{	i++;
	if(i<n && a[i]==key)
		return (i);
	}
	return (-1);
}
