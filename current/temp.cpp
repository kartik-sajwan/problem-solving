

#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>

using namespace std;

int main()	{

	int t, n, flag, i;
	long long int a[20], my_sum, sum;

	cin >> t;
	while(t--)	{

		cin >> n;
		cin>>sum;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n, greater<int>());
		i=0;
		flag = 0;
		my_sum = 0;
		while(i<=n)	{
			if(my_sum == sum)	{
				my_sum += a[i];
				cout<< "YES\n";
				flag = 1;
			}
			else if(my_sum < sum && a[i] > 0)	{
				if(my_sum+a[i] <= sum)
					my_sum += a[i];
			}
			else if(my_sum > sum && a[i] < 0)	{
				if(my_sum+a[i] >= sum)
					my_sum += a[i];
			}
			i++;
			cout<<my_sum<<"\t";
		}
		if(!flag)
			cout << "NO";
	}
	return 0;
}
 /*  	*/
/* 

int main()	{

	int a;
	cin>>a;
	char res[1000];
	itoa(a, res, 2);
	cout<<res;
	return 0;
}

*/


