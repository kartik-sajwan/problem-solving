#include<iostream>
using namespace std;

int main()	{
	int t, l , c, h, w;
	int row, col;
	cin>>t;
	while(t--)	{
		cin>>l>>c>>h>>w;
		row = 2+c*w+(c-1);
		col = 2+h*l+(l-1);
		for(int j=0; j<col; j++)	{
			for(int k=0; k<row; k++)	{
				if(j==0||k==0||k%(w+1)==0||j%(h+1)==0)
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
