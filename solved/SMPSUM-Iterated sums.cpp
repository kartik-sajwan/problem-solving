#include<iostream>

using namespace std;

int main()	{
	int x, y;
	long int smaller=0, larger=0, sum=0;
	cin>>x>>y;
	x--;
	while(x || y)	{
		if(x)	{
			smaller+= x*x; x--;
		}
		if(y)	{
			larger+= y*y; y--;
		}
	}
	sum = larger - smaller;
	printf("%ld", sum);
	return 0;
}
