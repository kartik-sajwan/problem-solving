/*	*/
#include<stdio.h>

int main() {
	int t, n, x, y;
	scanf("%d", &t);
	while(t--)	{
		scanf("%d%d%d", &n, &x, &y);
		for(int j=1; j<n; j++)	{
			if(j%x==0 && j%y!=0)	{
				printf("%d ", j);
			}
		}
		printf("\t");
	}
	return 0;
}
