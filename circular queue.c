#include<stdio.h>
#include<conio.h>

#define SIZE 6

int queue[SIZE];
int front = -1, rear = -1;


void insert(int data){
	
	if(((front == rear-1) && (front != 0)) || (rear != SIZE-1)){
		//checking if full
		if((front == -1) && (rear == -1)){//checking empty
			front = 0;
			rear= 0;
			queue[rear] = data;
		}
		else{
                        Rear++;
			queue[rear] = data;
		}
	}
	else if((rear == SIZE-1) && (front != 0)){//checking deleted
			rear==0;	
			queue[rear] = data;
	}
	else //telling queue is full
	printf("queue is full");
}


int delete1(){
	int data; 

	if((front != -1) && (rear != -1)){
		data = queue[front];//yaha pe rear likha tha

		if(front == SIZE-1){
			front = 0;
			return data;
		}
		else{
			front++;
			return data;
		}

	}
	else{
		printf("Queue is empty\n");
		return 0;
	}
}

void display(){//display was incomplete
	int i,last;
		last=queue[front-1];
		if(front<rear){    //for printing normally
		
			for(i=front;i<rear;i++){
			printf("|%d |",queue[i]);
			}
		}
	else //if we have added element after deleting
		{
			for(i=front;i<SIZE;i++)//print from front to size
				printf("|%d|",queue[i]);
			 //print from last to rear here now i=size-1
				for(i=0;i<=rear;i++)
					printf("|%d|",queue[i]);
					
		}
	}


void main(){
	int element,choice;
//	clrscr();

	while(1){
		printf("\nEnter the choice\n");
		printf("1. Enter element\n");
		printf("2. Delete from Queue\n");
		printf("3. Print Queue\n");
		printf("4. Exit\n");

		scanf("%d",&choice);

		switch(choice){
			case 1:
			printf("Enter the element to insert into the q\n");
			scanf("%d",&element);
			insert(element);
			break;

			case 2: element = delete1();
			printf("\n%d element deleted\n",element);
			break;

			case 3: display();
			break;

			case 4: return ;
		}

	}

}
