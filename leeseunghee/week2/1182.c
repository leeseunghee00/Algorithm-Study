#include <stdio.h>
#include <stdlib.h>

int n, sum;
int *arr;
int cnt=0;

void DFS(int index, int total){
	if(index == n){
		if(total == sum)
			cnt++;
		return ;
	}

	DFS(index+1, total);
	DFS(index+1, total+arr[index]);
}

int main(){
    scanf("%d %d", &n, &sum);

	arr = (int *)malloc(sizeof(int) * n + 1);
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
	
	DFS(0,0);
	
	if(sum==0)	cnt--;
    printf("%d\n", cnt);
}