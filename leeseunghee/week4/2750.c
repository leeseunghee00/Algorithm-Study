#include <stdio.h>

int main(){
	int n, tmp, i, j;
	
	scanf("%d", &n);

	int num[n];

	for(int i=0; i<n; i++){
		scanf("%d", &num[i]);	
	}

	for(i= 1; i<n; i++){
		tmp = num[i];
		j = i-1;
		
		while(j>=0 && num[j] > tmp && num[j]<10001){
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = tmp;
	}

	for(int i=0; i<n; i++){
		printf("%d\n", num[i]);
	}
}