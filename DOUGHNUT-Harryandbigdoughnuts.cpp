#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int t=0,c=0,k=0,w=0;
	cin>>t;
	while(t>0) {
		cin>>c;	cin>>k;	cin>>w;
			if(k>=(c*w)) {
				cout<<"yes"<<endl;
			}
			else {
				cout<<"no"<<endl;
			}
		t--;
		}
	return 0;
}
