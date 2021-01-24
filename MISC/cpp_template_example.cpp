#include<iostream>

using namespace std;

template <typename Type>
Type maxof(Type a, Type b)	{
	return (a > b ? a : b);
}

template <typename type>
type my_function(type arg_a, type arg_b)	{
	type temp_var;
	temp_var = arg_b + arg_a;
	return temp_var;
}

int main()	{
	cout<<maxof<string>("aaaa", "baaa");
	cout<<endl;
	cout<<my_function<string>("String1", "String2");
	return 0;
}

