#include<iostream>
#include<string.h>
#include<vector>
#include<stdio.h>

using namespace std;

int main() {
	int N=0, n, sum, count=1;
	unsigned int j;
	string str;
	vector<char> final;
	vector<char> binary(1);
	final.reserve(1);
	binary.reserve(1);
	cin>>N;
	while(N--)	{
		final.resize(1);
		sum=0;
		bool check[256]={false};
		cin>>str;
		for(j=0; j<str.size(); j++)	{
			n=int (str[j]);
			if(check[n]==false)	{
				sum+=n;
				check[n]=true;
			}
		}
		int p=0;
		binary.resize(1);
		while(sum>0)	{
				if(sum%2 == 0)	{
					binary.reserve(p);
					binary.push_back('0');
				}
				else	{
					binary.reserve(p);
					binary.push_back('1');
				}
				sum = sum/2;
				p++;
			}
		printf("#%d : ", count);
		vector<char>::const_iterator z;
		for(z=binary.end(); z!=binary.begin(); z--)	{
			if(z!=binary.end())	{
				cout<<*z;
			}
		}
		printf("\n");
		count++;
	}
	return 0;
}
