#include<iostream>
using namespace std;

int main()	{
	int t, r, c;
	cin>>t;
	while(t--)	{
		cin>>r;
		cin>>c;
		for(int j=1; j<=r; j++)	{
			for(int k=1; k<=c; k++)	{
				if(j==1||j==r||k==1||k==c)
					cout<<"*";
				else
					cout<<".";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
