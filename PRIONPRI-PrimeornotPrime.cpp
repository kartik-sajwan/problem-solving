#include<iostream>
#include<math.h>
using namespace std;

int main()	{
	long long int t, n, count;
	cin>>t;
	count=0;
	while(t--)	{
		cin>>n;
		for(long long int j=2; j<=sqrt(n); j++)	{
			if(n%j==0)
				count++;
		}
		if(count==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		count=0;
	}
	return 0;
}