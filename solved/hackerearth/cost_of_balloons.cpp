/*https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/description/*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main()	{
	int t;
	int cost1, cost2;
	int n, q1=0, q2=0;
	int f, s;
	int sum;

	cin>>t;

	while(t--)	{
		cin>>cost1>>cost2;
		cin>>n;
		q1=0, q2=0;
		while(n--)	{
			cin>>f>>s;
			if(f==1)	{
				q1++;
			}
			if(s==1)	{
				q2++;
			}
		}
		if(q1>=q2)	{
			if(cost1>cost2)	{
				sum = q1*cost2 + q2*cost1;
			}
			else 	{
				sum = q1*cost1 + q2*cost2;
			}
		}
		else	{
			if(cost1>cost2)	{
				sum = q1*cost1 + q2*cost2;
			}
			else 	{
				sum = q1*cost2 + q2*cost1;
			}
		}
		printf("%d\n", sum);
	}


	return 0;
}