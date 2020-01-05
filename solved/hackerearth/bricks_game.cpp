/*https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/*/
#include<stdio.h>
#include<iostream>

using namespace std;

int main()  {
    int n, temp=0, i=1;
    cin>>n;

    while((temp+3*i)<n)   {
        temp = temp + 3*i;
        i++;
    }
    if(n-temp <= i)
        cout<<"Patlu";
    else if(n-temp >i && n-temp <= 3*i)
        cout<<"Motu";
}
