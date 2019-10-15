/*	*/
#include<stdio.h>

using namespace std;

int main() {
	int t, count =0;
	long long int m, n;
	scanf("%d", &t);
	while(t>0)	{
		scanf("%lld%lld", &m, &n);
		while(m<=n)	{
			for(long long int j=1; j<=m; j++)	{
				if(m%j==0)
					count++;
			}
			if(count==2)
				printf("%lld \n", m);
			count=0;
			m++;
		}
		printf("\n");
		t--;
	}
	return 0;
}
