#include<iostream>
using namespace std;

int main()	{
	int t, r, c;
	cin>>t;
	while(t--)	{
		cin>>r;
		cin>>c;
		for(int j=0; j<r; j++)	{
			for(int k=0; k<c; k++)	{
				if((j+k)%2==0)
					cout<<"*";
				else
					cout<<".";
			}
			cout<<"\n";
		}
		cout<<endl;
	}
	return 0;
}
