#include <stdio.h>
//0:true    -1:false

#define MAX_SIZE  100

void init_queue(Queue queue);
int empty_queue(Queue queue);
int full_queue(Queue queue);
int insert_queue(Queue queue, int data);
int delete_queue(Queue queue);

typedef struct{
	int data[MAX_SIZE];
	int front;
	int rear;
}Queue;

void main()
{
	Queue queue;
	
	init_queue(queue);
	insert_queue(queue, 1);
	delete_queue(queue);
	
	return ;
}

void init_queue(Queue queue)
{
	queue.data = 0;
	queue.front = 0;
	queue.rear = 0;
	
	return ;
}

int empty_queue(Queue queue)
{
	if(queue.front == queue.rear){
		return 0;
	}
	return -1;
}

int full_queue(Queue queue)
{
	if(queue.rear == (MAX_SIZE-1)){
		return 0;
	}
	return -1;
}

int insert_queue(Queue queue, int data)
{
	if(!full_queue(queue)){
		return -1;
	}
	queue.data[queue.rear] = data;
	queue.rear++;
	
	return 0;
}

int delete_queue(Queue queue)
{
	if(!empty_queue(queue)){
		return -1;
	}
	queue.data[--queue.rear] = 0;
	
	return 0;
}

