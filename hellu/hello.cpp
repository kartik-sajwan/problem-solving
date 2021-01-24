#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
	int			   n=1;
	cin >> n;
	do
	{
		cout << n << "\n";
		cin >> n;
	} while(n);

	for(const string& word : msg)
	{
		cout << word << " ";
	}
	cout << endl;
}