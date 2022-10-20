#include <stdio.h>
#include <stdlib.h>

int* stack;
int size = 0;

void pop() {
	size--;
}

void push(int n) {
	stack[size] = n;
	size++;
}

int main() {
	int k, n;
	int sum = 0;

	scanf("%d", &k);

	stack = (int*)malloc(sizeof(int) * k + 1);

	while (k-- > 0) {
		scanf("%d", &n);

		if (n == 0)
			pop();
		else
			push(n);
	}

	for (int i = 0; i < size; i++) {
		sum += stack[i];
	}

	printf("%d\n", sum);
}