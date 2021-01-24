#include<iostream>
#include<ctime>
#include <stdlib.h>
using namespace std;

int main()	{
	int i, j, k, move, b[10][10]; 
	char a[10][10];
	char ch = 'A';
	for(i=0; i<10; i++)	{
		for(j=0; j<10; j++)	{
			a[i][j] = '.';
			b[i][j] = 0;
			cout<<a[i][j];
		}
		cout<<endl;
	}
	srand(time(0));

	i=0;	j=0;
	a[i][j] = (char)ch;
	ch++;
	b[i][j] = 1;

	for(k=0; k<25; k++)	{
		move = rand();
		move %= 4;
		if(move==0 && j-1>=0 && b[i][j-1] == 0)	{
			j=j-1;
		}
		else if(move==1 && i-1>=0 && b[i-1][j] == 0)	{
			i = i-1;
		}
		else if(move==2 && j+1<10 && b[i][j+1] == 0)	{
			j = j+1;
		}
		else if(move==3 && i+1<10 && b[i+1][j] == 0)	{
			i = i+1;
		}
		else {
			k--;
			continue;
		}

		a[i][j] = ch;
		b[i][j] = 1;
		ch++;		
	}
	cout<<"\n\n";

	for(i=0; i<10; i++)	{
		for(j=0; j<10; j++)	{
			cout<<a[i][j];
		}
		cout<<endl;
	}

	return 0;
}
