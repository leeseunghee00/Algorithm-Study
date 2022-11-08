#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	int tmp;

	gets(arr);

	for (int i = 0; i < strlen(arr); i++) {
		for (int j = i; j < strlen(arr); j++) {
			if (arr[j] > arr[i]) {
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

	puts(arr);
}