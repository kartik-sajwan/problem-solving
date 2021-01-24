/*	*/
#include<stdio.h>
#include<time.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int a1, a2, a3;
	scanf("%d%d%d", &a1, &a2, &a3);
	while(a1||a2||a3)	{
		if((a3-a2)==(a2-a1))	{
			printf("AP %d\n", a3+(a2-a1));
		}
		else if((a2/a1)==(a3/a2))	{
			printf("GP %d\n",a3*(a2/a1));
		}
		scanf("%d%d%d", &a1, &a2, &a3);
	}
	return 0;
}
