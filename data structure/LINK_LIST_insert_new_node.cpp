#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *Next;
};
int main()
{
	//initialize nodes
	
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	// Allocate Memory
	one=(node *)malloc(sizeof(struct node));
	two=(node *)malloc(sizeof(struct node));
	three=(node *)malloc (sizeof(struct node));
	
	//Assign data value
	one->data=10;
	two->data=20;
	three->data=30;
	//Connect node */
	one->Next=two;
	two->Next=three;
	three->Next=NULL;
	head=one;
	
	struct node *newnode=NULL;
	newnode=(node*)malloc(sizeof(struct node));
	newnode->data=4;
	
	int position;
	printf("Enter Position: ");
	scanf("%d",&position);
	struct node *temp=head;
	for(int i=2;i<position;i++)
	{
		if(temp->Next!=NULL)
		{
			temp=temp->Next; 
		}
	}
newnode->Next=temp->Next;
temp->Next=newnode; 
	

		struct node *temp2=head;
		while(temp2!=NULL){
			printf("%d--->",temp2->data);
			temp2=temp2->Next;
		}
		
}
