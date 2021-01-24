#include<stdio.h>

int main() {
	int t;
	long n, sum;
	scanf("%d", &t);
	while(t--)	{
		sum=0;
		scanf("%ld", &n);
		for(int j=5; j<=n; j*=5)	{
			sum+=(n/j);
		}
		printf("%ld\n", sum);
	}
	return 0;
}
