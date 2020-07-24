#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5

int front = -1, rear = -1;
int queue[maxsize];

void insert(){

	int item;
	printf("\nEnter the item: ");
	scanf("%d", &item);

	if(front>rear || rear>maxsize){
		printf("\nOVERFLOW");
		return;
	}
	else if(front == -1 && rear == -1){
		front = 0;
		rear = 0;
	}

	else{
		rear+=1;
	}

	queue[rear] = item;
	printf("\nInserted");
}
