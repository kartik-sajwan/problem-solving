//https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>

using namespace std;

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
	vector<int> result = twoSum(nums, target);

	for(auto it : result)
	{
		cout << it << "\n";
	}
	return 0;
}