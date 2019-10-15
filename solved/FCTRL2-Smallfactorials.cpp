/*	*/
#include<stdio.h>

using namespace std;

int main() {
	int t;
	int f;	int temp;	int m, x;
	int a[200];
	scanf("%d",&t);
	while(t--)	{
		a[0]=1;
		m=1;
		x=0;
		temp=0;
		scanf("%d", &f);
		for(int j=1; j<=f; j++)	{
			for(int i=0; i<m; i++)	{
				x=a[i]*j+temp;
				a[i]=x%10;
				temp=x/10;
			}
			while(temp>0)	{
				a[m]=temp%10;
				temp=temp/10;
				m++;
			}
		}
		for(int k=m-1; k>=0; k--)	{
			printf("%d", a[k]);
		}
		printf("\n");
	}
	return 0;
}
