
#include <bits/stdc++.h>

using namespace std;

bool increasingTriplet(vector<int>& nums)
{
	int value = 0, count = 0;
	value = nums[nums.size() - 1];
	for(int i = nums.size() - 2; i >= 0; --i)
	{
		if(nums[i] < value)
		{
			value = nums[i];
			count++;
		}
	}

	if(count >= 2)
		return true;

	return false;
}

int expandAroundCenter(string s, int L, int R)
{

	while(L >= 0 && R <= s.size() && s[L] == s[R])
	{
		L--;
		R++;
	}
	return R - L - 1;
}
string longestPalindrome(string s)
{ }

vector<int> twoSum(vector<int>& nums, int target)
{
	map<int, int> hash;
	vector<int>	  result;
	for(int i = 0; i < nums.size(); i++)
	{
		int x = nums[i];
		int y = target - x;

		if(hash.find(y) != hash.end())
		{
			result.push_back(hash[y]);
			result.push_back(i);
			return result;
		}
		hash[x] = i;
	}
	return result;
}

int main()
{
	vector<int> nums   = {2, 7, 11, 15};
	int			target = 9;
	//cout << increasingTriplet(nums);
	vector<int> result = twoSum(nums, target);
	for(auto it : result)
	{
		cout << it << "\n";
	}
	return 0;
}