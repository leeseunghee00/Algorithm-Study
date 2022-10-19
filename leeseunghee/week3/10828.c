#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cnt=0;
int *arr, N;

void push(int num){
	arr[cnt] = num;
	cnt++;
}

void pop(){
	if(cnt == 0)
		printf("-1\n");
	else{
		cnt--;
		printf("%d\n", arr[cnt]);
	}
}

void size(){
	printf("%d\n", cnt);
}

void empty(){
	if (cnt == 0)
		printf("1\n");
	else
		printf("0\n");
}

void top(){
	if (cnt!=0){
		printf("%d\n", arr[cnt - 1]);
	}
	else
		printf("-1\n");
}

int main(){
	int num;
	char stack[10];

	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int) * N + 1);

	while(N-->0){
		scanf("%s", &stack);

		if(!strcmp(stack, "push")){
			scanf("%d", &num);
			push(num);
		}
		else if(!strcmp(stack, "pop")){
			pop();
		}
		else if(!strcmp(stack, "size")){
			size();
		}
		else if(!strcmp(stack, "empty")){
			empty();
		}
		else if(!strcmp(stack, "top")){
			top();
		}
	}
}