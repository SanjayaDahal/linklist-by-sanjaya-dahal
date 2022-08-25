#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *pre;
};
int main()
{
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	struct node *tail;
	
	
	//allocate memory
	one=(node *)malloc(sizeof(struct node));
	two=(node *)malloc(sizeof(struct node));
	three=(node *)malloc(sizeof(struct node));
	
	one->data=10;
	one->next=two;
	one->pre=NULL;
	two->data=20;
	two->next=three;
	two->pre=one;
	three->data=30;
	three->next=NULL;
	three->pre=two;
	head=one;
	tail=three;
	struct node *temp=head;
	printf("Left to right traversal\n");
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	struct node *temp1=tail;
	printf("\n");
	printf("Right to Left Traversal\n");
	while(temp1!=NULL)
	{
		printf("%d<---",temp1->data);
		temp1=temp1->pre;
	}
}
