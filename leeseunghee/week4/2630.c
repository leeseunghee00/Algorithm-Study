#include <stdio.h>

int board[128][128];
int color[2];	//color[0]= 0, color[1]= 1

int isSameColor(int x, int y, int n) {
	if (n == 1)	return 1;

	int pivot = board[x][y];

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (pivot != board[i][j])
				return 0;
		}
	}

	return 1;
}

void cut(int x, int y, int n) {
	if (isSameColor(x, y, n)) {
		color[board[x][y]]++;
		return;
	}

	int half = n / 2;

	cut(x, y, half);
	cut(x + half, y, half);
	cut(x, y + half, half);
	cut(x + half, y + half, half);
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n * n; i++)
		scanf("%d", &board[i / n][i % n]);

	cut(0, 0, n);

	printf("%d\n%d\n", color[0], color[1]);
}