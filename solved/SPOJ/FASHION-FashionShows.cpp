#include<iostream>
using namespace std;

void sort(int array[], int n)	{
	int i, key, temp;
	for(i=1; i<=n-1; i++)	{
		key=i; 
		while(key>0 && array[key] < array[key-1])
		{
			temp = array[key];
			array[key] = array[key-1];
			array[key-1] = temp;
			key--;
		}
	}
}

void hotness_bond(int men[], int women[], int n)	{
	int i=0;
	long int sum=0;
	while(i<n)	{
		sum = sum + (men[i] * women[i]);
		i++;
	}
	cout<<sum<<endl;	
}

int main()	{
	int men[1000], women[1000], n, t, i;
	long int sum=0;
	cin>>t;

	while(t--)	{
		cin>>n;
		for(i=0; i<n; i++)	{
			cin>>men[i];
		}
		for(i=0; i<n; i++)	{
			cin>>women[i];
		}
		sort(men ,n);
		sort(women, n);
		hotness_bond(men, women, n);
	}
	return 0;
}
