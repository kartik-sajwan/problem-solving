#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int input=0;
	cin>>input;
	if(input!=42) {
		do {
			cout<<input<<endl;
			cin>>input;
		}
		while((input!=42));
	}
	return 0;
}
