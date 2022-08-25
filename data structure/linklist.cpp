#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node *Next;
};
int main()
{
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NUll;
	
	//allocate memory
	one=(node *)malloc(sizeof(struct node));
	two=(node *)malloc(sizeof(struct node));
	three=(node *)malloc(sizeof(struct node));
	
	//assign data value
	one->data=45;
	two->data=55;
	three->data=75;
	
	//connect node
	
	
}
