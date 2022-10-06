#include <stdio.h>

int arr[1000];
int check[1000];

void DFS(int m, int n, int depth){
	if(depth == n){
		for(int i=0; i<n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else{
		for(int i=1; i<=m; i++){
			if(!check[i]){
				arr[depth] = i;
				check[i] = 1;
				DFS(m, n, depth+1);
				check[i] = 0;
			}
		}
	}
}

int main(){
    int m, n;
	scanf("%d %d", &m, &n);
	DFS(m, n, 0);
}