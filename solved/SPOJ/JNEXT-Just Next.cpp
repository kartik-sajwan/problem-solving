#include<iostream>
using namespace std;

int main()	{
	int num[1000];
	long long int i, n, key, j;
	int t;
	int temp;
	int nofind=-1;
	cin>>t;
	while(t--)	{
		cin>>n;
		for(i=0; i<n; i++)	{
			cin>>num[i];
		}
		key = n-1;
		j = n-1;
		while(key>0 && num[key-1] >= num[key])
			key--;

		if(key==0)	{
			cout<<nofind<<endl;
			continue;
		}
		while(num[j] <= num[key-1])	{
			j--;
		}

		temp = num[key-1];
		num[key-1] = num[j];
		num[j] = temp;

		j = n-1;
		while(key<j)	{
			temp = num[key];
			num[key] = num[j];
			num[j] = temp;
			j--;
			key++;
		}

		for(i=0; i<n; i++)	{
			cout<<num[i];
		}
		cout<<endl;
	}
	return 0;
}
