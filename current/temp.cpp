

#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>

using namespace std;

int main()	{

	int t;
	long long int num, bak;

	cin >> t;
	while(t--)	{
		cin >> num;
		bak = num;
		while(num & (num-1))	{
			num = num & (num-1);
		}
		if((num*2)-1 == bak)	{
			cout << bak << endl;
		}
		else
			cout << num-1 << endl;
	}
	
	return 0;

}
/* */
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