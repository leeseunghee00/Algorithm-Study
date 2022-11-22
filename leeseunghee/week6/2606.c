#include <stdio.h>
#define SIZE 101

int graph[SIZE][SIZE];
int visit[SIZE] = { 0 };
int virus = 0;

void dfs(int com, int v) {
	for (int k = 1; k <= com; k++) {
		if (visit[k] == 0 && graph[v][k] == 1) {
			visit[k] = 1;
			dfs(com, k);
			virus++;
		}
	}
}

int main() {
	int com, n;
	int u, v;

	scanf("%d", &com);
	scanf("%d", &n);

	while (n-- > 0) {
		scanf("%d %d", &u, &v);
		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	visit[1] = 1;
	dfs(com, 1);
	printf("%d\n", virus);
}