#include<iostream>

using namespace std;

int main()	{
	int t;
	long long int sum, third, third_last;
	long long int n, a, d, diff3, diff_d, i;

	cin>>t;

	while(t--)	{

		cin>>third>>third_last>>sum;
		n = (sum*2)/(third+third_last);
		if(n<0)
			n = n*(-1);

		if(third>=third_last)	{
			diff3 = third - third_last;
			diff_d = 2 - (n-3);
		}
		else	{
			diff3 = third_last - third;
			diff_d = (n-3) - 2;
		}

		d = diff3 / diff_d;

		a = third - 2*d;

		cout<<n<<endl;
		for(i=0; i<n; i++)	{
			cout<<a+(i*d)<<" ";
		}
		cout<<endl;

	}
	return 0;
}
