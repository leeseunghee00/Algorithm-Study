#include <stdio.h>
#define SIZE 1001

int n, m;
int cnt = 0;
int visit[SIZE] = { 0 };
int graph[SIZE][SIZE];

void dfs(int v) {
	visit[v] = 1;

	for (int k = 1; k <= n; k++) {
		if (visit[k] == 0 && graph[v][k] == 1)
			dfs(k);
	}
}

int main() {
	int u, v;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &u, &v);
		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0) {
			cnt++;
			dfs(i);
		}
	}

	printf("%d\n", cnt);
}