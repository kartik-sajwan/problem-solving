#include<iostream>
using namespace std;

int main()	{
	long long int x, y, t;
	cin>>t;
	while(t--)	{
		cin>>x>>y;
		if(x%2==0 && y%2==0 && (y==x || x-y==2))	{
			cout<<x+y<<endl;
		}
		else if(x%2!=0 && y%2!=0 && (x-y==2 || y==x))	{
			cout<<(x+y-1)<<endl;
		}
		else 
			cout<<"No Number"<<endl;

	}
	return 0;
}
