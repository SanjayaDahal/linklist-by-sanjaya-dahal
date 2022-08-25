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
	struct node *tail;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	
	//Allocate Memory Location
	
	one=(node*)malloc(sizeof(struct node));
		two=(node*)malloc(sizeof(struct node));
			three=(node*)malloc(sizeof(struct node));
			
			one->data=1;
			one->next=two;
			one->pre=NULL;
				two->data=2;
			two->next=three;
			two->pre=one;
				three->data=3;
			three->next=NULL;
			three->pre=two;
			head=one;
			tail=three;
			
			struct node *temp=head;
		printf("Left to right\n");
			while(temp!=NULL)
			{
				printf("|%d|",temp->pre);
				printf("%d|",temp->data);
				printf("%d|-->",temp->next);
		
				temp=temp->next;
			}
			printf("\n");
			printf("Right to left\n");
			struct node *temp1=tail;
			while(temp1!=NULL)
			{
				printf("|%d|",temp1->pre);
				printf("%d|",temp1->data);
				printf("%d|-->",temp1->next);
		
				temp1=temp1->pre;
			}
	
}
