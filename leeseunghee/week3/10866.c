#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
} Node;

typedef struct Deque{
	Node *front;
	Node *rear;
	int size;
} Deque;

void initDeque(Deque *dq){
	dq->front = dq->rear = NULL;
	dq->size = 0;
}

int empty(Deque *dq){
	return (dq->size == 0);
}

void push_front(Deque *dq, int data){
	Node *new_dq;
	
	new_dq = (Node *)malloc(sizeof(Node));
	new_dq->data = data;
	new_dq->next = dq->front;

	if(empty(dq)){
		dq->rear = new_dq;
	}
	else{
		dq->front->prev = new_dq;
	}

	new_dq->prev = NULL;
	dq->front = new_dq;
	dq->size++;
}

void push_back(Deque *dq, int data){
	Node *new_dq;

	new_dq = (Node *)malloc(sizeof(Node));
	new_dq->data = data;
	new_dq->prev = dq->rear;

	if(empty(dq)){
		dq->front = new_dq;
	}
	else{
		dq->rear->next = new_dq;
	}

	new_dq->next = NULL;
	dq->rear = new_dq;
	dq->size++;
}

void pop_front(Deque *dq){
	Node *ptr;

	if(empty(dq)){
		printf("-1\n");
	}
	else{
		printf("%d\n", dq->front->data);

		ptr = dq->front;
		dq->front = ptr->next;
		ptr->prev = NULL;
		dq->size--;
	}
}

void pop_back(Deque *dq){
	Node *ptr;

	if(empty(dq)){
		printf("-1\n");
	}
	else{
		printf("%d\n", dq->rear->data);

		ptr = dq->rear;
		dq->rear = ptr->prev;
		ptr->next = NULL;
		dq->size--;
	}
}

void size(Deque *dq){
	printf("%d\n", dq->size);
}

void front(Deque *dq){
	if(empty(dq)){
		printf("-1\n");
	}
	else{
		printf("%d\n", dq->front->data);
	}
}

void back(Deque *dq){
	if(empty(dq)){
		printf("-1\n");
	}
	else{
		printf("%d\n", dq->rear->data);
	}
}

int main(){
	int N, data;
	char op[100];
	Deque deque;

	scanf("%d", &N);
	initDeque(&deque);

	while(N-->0){
		scanf("%s", &op);

		if(!strcmp(op, "push_front")){
			scanf(" %d", &data);
			push_front(&deque, data);
		}
		else if(!strcmp(op, "push_back")){
			scanf(" %d", &data);
			push_back(&deque, data);
		}
		else if(!strcmp(op, "pop_front")){
			pop_front(&deque);
		}
		else if(!strcmp(op, "pop_back")){
			pop_back(&deque);
		}
		else if(!strcmp(op, "size")){
			size(&deque);
		}
		else if(!strcmp(op, "empty")){
			printf("%d\n", empty(&deque));
		}
		else if(!strcmp(op, "front")){
			front(&deque);
		}
		else if(!strcmp(op, "back")){
			back(&deque);
		}
	}
}