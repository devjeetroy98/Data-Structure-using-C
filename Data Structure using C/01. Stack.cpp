#include<stdio.h>
#include<cstdlib>

int MAX_SIZE=0,top=-1,arr[100];

bool isOverflow(){
	if(top == MAX_SIZE-1){
		return true;
	}else{
		return false;
	}
};

bool isUnderflow(){
	if(top == -1){
		return true;
	}else{
		return false;
	}
};

int push(int elem){
	top = top + 1;
	arr[top] = elem;
};

int pop(){
	top = top-1;
};

void display(){
	for(int i=0; i<=top; i++){
		printf("%d ", arr[i]);
	}
};

int main(){
	int n,i,ch, elem=0;
	
	printf("Enter size of stack:\n");
	scanf("%d",&MAX_SIZE);
	
	while(true){
		printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		
		switch(ch){
					case 1: printf("Enter the element to be inserted:\n");
							scanf("%d",&elem);
							if (!isOverflow()){
								push(elem);
							}else{
								printf("Stack is Overflown!");
							}
							break;
							
					case 2: if(!isUnderflow()){
								pop();
							}else{
								printf("Stack is Underflown!");
							}
							break;
							
					case 3: if(!isUnderflow()){
								display();
							}else{
								printf("Nothing to display.");
							}
							break;
					
					case 4: exit(true);
							break;
					
					default : printf("Enter correct choice!");
		}
	}	
	return 0;
}
