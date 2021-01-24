#include<iostream>
#include<math.h>
using namespace std;

int main()	{
	long long int t, n, new_n;
	int i, j;
	int a[50];
	cin>>t;

	while(t--)	{
		cin>>n;
		if(n%2==0)	{
			i = 0;
			while(n>0)	{
				a[i] = n%2;
				n = n/2;
				i++;
			}
			i--;
			j = 0;
			new_n = 0;
			
			while(i>=0)	{
				if(a[i])
					new_n = new_n + pow(2, j);
				i--;
				j++;
				
			}
			cout<<new_n<<endl;
		}
		else
			cout<<n<<endl;
		
	}
	return 0;
}