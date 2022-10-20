#include <stdio.h>
#include <string.h>

char arr[50];

void vps() {
	int result = 0;

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '(')
			result += 1;
		else
			result -= 1;

		if (result < 0) {
			printf("NO\n");
			return;
		}
	}

	if (result == 0)
		printf("YES\n");
	else
		printf("NO\n");
}

int main() {
	int n;
	scanf("%d", &n);

	while (n-- > 0) {
		scanf("%s", &arr);
		vps();
	}
}