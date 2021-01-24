#include<iostream>
using namespace std;

int main()	{
	int t, r, c;
	cin>>t;
	while(t--)	{
		cin>>r;
		cin>>c;
		for(int j=0; j<=r*3; j++)	{
			for(int k=0; k<=c*3; k++)	{
				if(j==0||k==0||(k%3)==0||(j%3)==0)
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
