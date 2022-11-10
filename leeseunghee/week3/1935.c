#include <stdio.h>
#include <string.h>

int p = 0;
double stack[101];

void push(double n) {
	stack[p] = n;
	p++;
}

void pop() {
	p--;
}

double top() {
	return (stack[p - 1]);
}

double calc(double a, double b, char ch) {
	if (ch == '+')	return a + b;
	else if (ch == '-')	return a - b;
	else if (ch == '*')	return a * b;
	else if (ch == '/')	return a / b;
}

int main() {
	int n;
	scanf("%d", &n);

	char str[101];
	scanf("%s", &str);

	char num[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	double first;
	double second;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			push((double)num[str[i] - 'A']);
		}
		else {
			second = top();
			pop();
			first = top();
			pop();
			push(calc(first, second, str[i]));
		}
	}

	double result = top();
	printf("%.2f", result);
}