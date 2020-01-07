#include<iostream>
#include<vector>

using namespace std;

template <typename cT, typename retT = cT, typename sepT = decltype(cT::value_type)>
retT joinContainer(const cT &o, const sepT &sep)	{
	retT out;
	auto it = o.begin();
	while(it != o.end())	{
		out += *it;
		if(++it != o.end())
			out += sep;
	}
	return out;
}

int main()	{
	string s1("This is simple string");
	string s2("and this string contains some alphabets");
	string s3("and this string is combination of three individual strings joined by using container function");

	//join the character of a string 
	cout<< joinContainer(s3, ':')<< endl;

	//join strings from a vector, returning a string
	vector<string> vs({s1, s2, s3});

	cout << joinContainer<vector<string>, string>(vs, ",");
	return 0;
}

