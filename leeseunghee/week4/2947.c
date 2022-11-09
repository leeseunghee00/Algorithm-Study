#include <stdio.h>

int num[5];

void print() {
	for (int i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

void sort() {
	int tmp;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (num[j] > num[j + 1]) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;

				print();
			}
		}
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	sort();
}