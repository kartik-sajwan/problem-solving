/*	*/
#include<stdio.h>
#include<iostream>
using namespace std;

int revdig (int a)	{
	int temp=0;
	while(a>0){
		temp*=10;
		temp=temp+(a%10);
		a/=10;
	}
	return temp;
}
int main() {
	int t =0, val1, val2, result=0;
	scanf("%d", &t);
	while(t--)	{
	scanf("%d", &val1);
	scanf("%d", &val2);
	val1=revdig(val1);
	val2=revdig(val2);
	result=val1+val2;
	result=revdig(result);
	printf("%d", result);
	printf("\n");
	}
	return 0;
}
