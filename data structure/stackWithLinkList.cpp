#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *tos=NULL;

void push(int x){
struct node *temp=NULL;
temp=(node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=tos;
tos=temp;
}

void pop(){
	if(tos==NULL){
		printf("Stack is empty, ");
		return;
			}
	struct node *temp3=tos;
	tos=temp3->next;
}

int main(){
	push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);	push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);	push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);	push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);
		push(5);
	push(15);
	push(20);
	push(25);
	push(30);
	push(30);

	struct node *temp2=tos;
	while(temp2!=NULL){
		printf("%d, ",temp2->data);
		temp2=temp2->next;
		
	}
	
}
