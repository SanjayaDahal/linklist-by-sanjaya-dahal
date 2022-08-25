#include<stdio.h>
#define MAX_SIZE 5
int S[MAX_SIZE];
int tos=-1;
isfull(){
		if(tos==MAX_SIZE-1){
		printf("Stack is overflow ");
		return true;
	}
}
void push(int x){
	if(!sisfull()){
		tos=tos+1;
	S[tos]=x;
	}

}
void pop(){
	if(tos==-1){
		printf("Stack is empty");
		return;
	}
	tos=tos-1;
}
int main(){
	push(5);
	pop();
for(int i=0; i<=tos; i++){
	printf("%d, ",S[i]);
}	
}




