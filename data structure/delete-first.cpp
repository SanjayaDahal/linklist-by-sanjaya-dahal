#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	//initialize nodes//
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;

//Allocate Memory //
one=(node*)malloc(sizeof(struct node));
two=(node*)malloc(sizeof(struct node));
three=(node*)malloc(sizeof(struct node));
///assign data value
one->data=10;
two->data=40;
three->data=50;

// Connect nodes
one->next=two;
two->next=three;
three->next=NULL;
head=one;




struct node *temp=head;
while(temp->next!=NULL){
	printf("%d-->",temp->data);
	temp=temp->next;
}

}
