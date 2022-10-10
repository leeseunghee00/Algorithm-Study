#include <stdio.h>
#include <stdlib.h>

int k, *S;
int lotto[6];

void DFS(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			printf("%d ", lotto[i]);
		}
		printf("\n");
	}
	else {
		for (int i = start; i < k; i++) {
			lotto[depth] = S[i];
			DFS(i + 1, depth + 1);
		}
	}
}

int main() {
	while (1) {
		scanf("%d", &k);

		if (k == 0)	break;
		else {
			S = (int*)malloc(sizeof(int) * (k + 1));

			for (int i = 0; i < k; i++) {
				scanf("%d", &S[i]);
			}

			DFS(0, 0);
			printf("\n");
		}
	}
}