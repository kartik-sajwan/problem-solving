//https://leetcode.com/problems/longest-substring-without-repeating-characters

#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)
{

	int				  left				 = 0;
	unsigned int	  right				 = 0;
	long unsigned int maxSubstringLength = 0;
	map<char, int>	  charSet;

	while(right < s.size())
	{
		if(charSet.find(s[right]) == charSet.end())
		{
			charSet.insert({s[right], 1});
			maxSubstringLength = max(charSet.size(), maxSubstringLength);
			right++;
		}
		else
		{
			charSet.erase(s[left]);
			left++;
		}
	}
	return maxSubstringLength;
}

int main()
{
	string str;
	cin >> str;
	cout << lengthOfLongestSubstring(str);

	return 0;
}