#include<stdio.h>
#include<math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int t, j;
	long int n, sum;
	scanf("%d", &t);
	while(t--)	{
		sum=0;
		j=1;
		scanf("%ld", &n);
		while(j<=sqrt(n))	{
			if(n%j==0)	{
				if(j==(n/j))
					sum+=j;
				else
					sum+=(j+n/j);
			}
			j++;
		}
		sum-=n;
		printf("%ld\n", sum);
	}
	return 0;
}
