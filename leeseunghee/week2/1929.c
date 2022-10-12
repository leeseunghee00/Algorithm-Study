#include <stdio.h>

int prime[1000001];

int main() {
    int m, n;
    
	scanf("%d %d", &m, &n);
    
    for(int i = 2; i < 1000001; i++){
        prime[i] = 1;
    }
    
    for(int i = 2; i <= n; i++){
        for(int j = 2 * i; j <= n; j+=i){
            prime[j] = 0;
        }
    }
    
    for(int i = m; i <= n; i++){
        if(prime[i] == 1){
            printf("%d\n", i);
        }
    }
    
    return 0;
}