

#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()	{
	//printf("%lf", myPow(2.10000, 3));
	int array[1000];
	int n=1000;
	int k =0;
	while(k<1000)	{
		cin>>array[k];
		k++;
	}
	int key;
	cout << "Enter key: ";
	cin >> key;
	k =0;
	for(int b = n/2; b >= 1; b/=2)	{
		while(k+b < n && array[k+b] <= key)	k += b;
	}
	if(array[k] == key)
		cout << "Found!";

	return 0;
}
  /* 	*/

/* 

int main()	{

	int a;
	cin>>a;
	char res[1000];
	itoa(a, res, 2);
	cout<< res;
	return 0;
}

*/


