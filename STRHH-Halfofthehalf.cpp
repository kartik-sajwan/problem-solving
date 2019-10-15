#include<iostream>
 
using namespace std;
 
int main()	{
	int t, len, i;
	string str;
	cin>>t;
	while(t--)	{
		cin>>str;
		len = str.length()/2;
		for(i=0; i<len; i+=2)	{
			cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}