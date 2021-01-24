#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>

using namespace std;

int main()	{

	long int t;
	long long int c, n, times, diff ;
	long long int sum, sum_n, bak_n;

	cin >> t;
	while(t--)	{
		sum = 0;
		cin >> c >> n;
		//check feasibility of distributing chocolates
		sum_n = (n*(n+1))/2;
		if(sum_n > c)
			cout << c << endl;
		else {
			diff = c - sum_n;
			times = diff / n;
			sum = sum_n + (n*times);
			cout << c-sum << endl;
		}

	}
	return 0;
}