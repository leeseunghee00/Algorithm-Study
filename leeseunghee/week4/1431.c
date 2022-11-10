#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(char* s) {
	int result = 0;

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			result += s[i] - '0';
	}

	return result;
}

int compare(const void* first, const void* second) {
	char* a = *(char**)first;
	char* b = *(char**)second;

	if (strlen(a) != strlen(b)) {
		return strlen(a) > strlen(b);
	}
	else {
		int asum = sum(a);
		int bsum = sum(b);

		if (asum != bsum)
			return asum > bsum;
		else
			return strcmp(a, b);
	}
}

int main() {
	int n;
	char** str;

	scanf("%d", &n);

	str = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++) {
		str[i] = (char*)malloc(sizeof(char) * 50);
		scanf("%s", str[i]);
	}

	qsort((void*)str, n, sizeof(str[0]), compare);

	for (int i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}
}