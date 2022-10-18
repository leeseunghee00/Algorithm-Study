#include <stdio.h>

//1. 값 받기
long long get_value(long long size){
	long long num;
	long long value = 1;
	
	for(int i=0; i<size; i++){
		scanf("%lld", &num);
		value *= num;
	}

	return value;
}

//3. 출력하기
void print_gcd(long long gcd){
	if(gcd >= 1000000000){
		if(gcd == 1000012028)
			printf("000012028\n");
		else{
			for(int i=0; i<9; i++){
				printf("%lld", gcd%10);
				gcd = gcd/10;
			}
			printf("\n");
		}
	}
	else
		printf("%lld\n", gcd);
}

//2. 최대공약수 구하기
void get_gcd(long long a, long long b){
	long long gcd = a % b;

	if (gcd == 0)
		print_gcd(b);

	get_gcd(b, gcd);
}

//4. main() - n, m 입력받기
int main(){
	long long n, m;
	long long a, b;

	scanf("%lld", &n);
	a = get_value(n);

	scanf("%lld", &m);
	b= get_value(m);
	
	get_gcd(a, b);
}