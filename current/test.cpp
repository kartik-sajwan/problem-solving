#include <bits/stdc++.h>

using namespace std;
/*
int maxNonAdjacentSum(const vector<int> &numbers, vector<int>::iterator it)	{
	cout << *it;
	if(it >= numbers.end())
		return 0;

	//cout << *it;
	//cout << maxNonAdjacentSum(numbers, it+1);
	//cout << maxNonAdjacentSum(numbers, it+2);

	return (*it += max(maxNonAdjacentSum(numbers, it+2), maxNonAdjacentSum(numbers, it+3)));
}


int main()	{
	// vector<int> nos = {3, 4, 1 ,1};
	// cout << "hi";
	// cout << maxNonAdjacentSum(nos, nos.begin());
	//cout << "Hellu!";


	pair<int><int> pair_table;
	
	return 0;
}
*/

/*
class Base{
public:
	virtual void print(){
		cout << "print inside base class";
	}
};

class Child : public Base{
public:
	void print(){
		cout << "Print inside child class";
	}
};

int main(){

	Child obj = new Base();
	cout << "Success";
	return 0;
}

*/

/*
#include <iostream>
using namespace std;

class Base{
public:

	Base(){
		cout << "Base constructor" << "\n";
	}
	~Base(){
		cout << "Base destructor " << "\n";
	}
	void print(){
		cout << "Print inside base" << "\n";
	}
	void show(){
		cout << "SHow from base" << "\n";
	}
};
class Derived : public Base{
public:

	Derived(){
		cout << "Derived constructor" << "\n";
	}
	~Derived(){
		cout << "Derived destructor " << "\n";
	}

	void print(){
		cout << "Print inside derived" << "\n";
	}
	void show(){
		cout << "Show from derived" << "\n";
	}
	
};


class Complex{
	public:
	int real, imag;
	
	Complex operator + (Complex const obj){
		Complex res;
		res.real = obj.real + real;
		res.imag = obj.imag + imag;
		return res;
	}
};

int main() {
	Base *ptr;
	Derived *obj = new Derived();
	
	ptr = obj;
	
	obj->print();
	obj->show();
	
	ptr->print();
	ptr->show();
	
	Complex a, b;
	a.real = 1;
	b.real = 2;
	a.imag = 20;
	b.imag = 34;
	
	Complex c = a + b;
	cout << c.real << " "<<c.imag << "\n";
	
	return 0;
}
*/

/*
int solution(string input, int N) 
{ 
	
	if (N%2 != 0) 
		return -1; 

	stack<char> balanceStack; 
	for (int i=0; i<N; i++) 
	{ 
		if (input[i]=='}' && !balanceStack.empty()) 
		{
			if (balanceStack.top()=='{') 
				balanceStack.pop(); 
			else
				balanceStack.push(input[i]); 
		} 
		else
			balanceStack.push(input[i]); 
	}

	int temp = balanceStack.size(); 

	int count = 0; 
	while (!balanceStack.empty() && balanceStack.top() == '{') 
	{ 
		balanceStack.pop(); 
		count++; 
	} 

	cout << temp << "\t" << count << "\n";
	return (temp/2 + count%2); 
}


int main() 
{ 
string input = "";
cin>> input;
int N = input.length(); 

cout << solution(input, N)<<endl;; 
return 0; 
}

*/

/*
int main(){


	int list[10] = {3,5,76,88,456,457,756,789,875,934};
	int key;
	cin >> key;

	int mid, upper, lower;
	lower = 0;
	upper = 9;

	while(lower < upper){

		mid = (lower + upper)/2;

		if(list[mid] == key){
			cout << "success";
			break;
		}
		if(key < list[mid]){
			upper = mid-1;
		}
		else if(key > list[mid]){
			lower = mid + 1;
		}

	}

	return 0;
}

*/

/*
int main(){


	vector<pair<string, int>> tarrif;

	tarrif.push_back(make_pair("car", 25));
	tarrif.push_back(make_pair("jeep", 35));
	tarrif.push_back(make_pair("suv", 40));
	tarrif.push_back(make_pair("bus", 55));
	tarrif.push_back(make_pair("truck", 70));


	unordered_map <string, int> change;
	int five, ten, fifty, hundred;
	vector<pair<string, int>> traffic;
	int toll;

	cin >> five >> ten >> fifty >> hundred;

	change[5] = five;
	change[10] = ten;
	change[50] = fifty;
	change[100] = hundred;

	cin >> n_cars;
	int i = 0;
	while(i < n_cars--){
		cin >> car >> n;
		traffic.push_back(make_pair(car, n);
	}	

	for(auto it = traffic.begin(); it != traffic.end(); it++){

		if(tarrif.find(traffic.first) != tarrif.end()){
			toll = tarrif.second;
			int change = traffic.second - toll;
		}
		else{
			cout << "error";
		}
		int denom = 50;
		if(change / denom > 0){
			change = change - 
		}

	}

	return 0;
}

*/

/*

int main() 
{ 

	int n;
	cin >> n;

	vector<pair<int, int>> all_pairs;

	for(int i = 1; i < n; i++){
		all_pairs.push_back(make_pair(i, (n-i)));
	}
    
    for(auto it : all_pairs){
    	cout << it.first << "\t" << it.second << "\n";
    }
    return 0; 
} 
*/

/*
int main(){
	int m, n;
	string str;
	cin >> str;
	cin >> m;
	cin >> n;

	int len = str.size();

	int start = 1;
	int end = len;
	int turns = 0;

	do{
		if(turns%2 == 0){
			start = start + m;
			if(start > len)
				start = start - len;
			end = end + m;
			if(end > len)
				end = end - len;

		}

		else if(turns%2 == 1){
			start = start + n;
			if(start > len)
				start = start - len;
			end = end + n;
			if(end > len)
				end = end - len;

		}
		turns++;
	}while(!(start == 1 && end == len));


	cout << turns;

	return 0;
}

*/
/*


int find_change(int n){
	if(n <= 0){
		return n;
	}

	int five = find_change(n-500);
	int two = find_change(n-200);

	return (max(five, two));

}
int main(){

	int n;
	cin >> n;

	cout << abs(find_change(n));

	return 0;
}

*/

/*

int main(){

	int n, k;
	int input;
	cin >> n >> k;
	int bak = n;
	do{
		cin >> input;
		if(input > n){
			cout << "INVALID INPUT\n";
			continue;
		}
		n = n-input;
		cout << "NUMBER OF CANDIES SOLD: " << input <<"\n";
		cout << "NUMBER OF CANDIES AVAILABLE: " << n << "\n";

		if(n <= k){
			n = bak;
		}

	}while(input);

	return 0;
}

*/

/*
int main()
{ 
    string str;
    cin>>str;
    set<char> table;
    
    for(int i = 0; i<str.size(); i++){
        table.insert(str[i]);
    }
    
    cout << table.size();
    
     
    
    map <char , int> hash;
    
    for(int i =0 ; i < str.size(); i++){
    
        if(hash.find(str[i]) == hash.end()){
            hash[str[i]] = 1;
        }
        else {
            hash.find(str[i])->second++;
        }
    }
    
    for(auto it = hash.begin(); it != hash.end(); it++){
        cout << it->first << " " << it->second<< " ";
    }
    
    
    return 0;
}

*/

/*
int main()
{

	std::vector<int> v;

	std::vector<int> i;

	int size_i, size_v;
	cin >> size_v >> size_i;

	for (int j = 0; j < size_v; j++)
	{
		cin >> v[j];
	}
	for (int j = 0; j < size_i; j++)
	{
		cin >> i[j];
	}

	auto itri = i.begin();
	int currv = 0;
	int curr;
	for (auto it = v.begin(); it != v.end(); it++)
	{

		if (itri == i.end())
		{
			cout << "true";
			return 0;
		}

		if (it != v.begin())
			curr = (*it) - (*(it - 1));
		else
			continue;

		cout << *it << " " << *itri << "\t";
		if ((itri != i.end()) && curr == *itri)
		{
			if ((it - v.begin()) == currv + 1)
			{
				currv = it - v.begin();
				itri++;
			}
		}
		else
		{
			itri = i.begin();
			it--;
		}
	}

	if (itri == i.end())
	{
		cout << "true";
	}
	else
		cout << "false";

	return 0;
}
*/

/*
//Min Sum
int Solution(vector<int> &A)
{

	map<int, int> hash;
	int			  ans = 0, temp = 0;
	int			  totalSum = 0, maxDiscount = 0, currentDiscount = 0;
	for(auto it = A.begin(); it != A.end(); it++)
	{
		temp = *it;
		totalSum += temp;
		if(hash.find(temp) != hash.end()) { hash[temp]++; }
		else
		{
			hash[temp] = 1;
		}
	}

	for(auto it = hash.begin(); it != hash.end(); it++)
	{
		currentDiscount = (it->first) * (it->second);
		maxDiscount		= max(currentDiscount, maxDiscount);
	}

	ans = totalSum - maxDiscount;
	return ans;
}

int main()
{

	vector<int> input;
	int			n, temp;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		input.push_back(temp);
	}

	cout << Solution(input);
	return 0;
}
*/

//Middle of the Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution
{
public:
	ListNode* middleNode(ListNode* head)
	{

		ListNode dummy_head;
		dummy_head.next	 = head;
		ListNode* first	 = &dummy_head;
		ListNode* second = &dummy_head;

		while(second != NULL)
		{
			if(second->next != NULL)
			{
				second = second->next->next;
				first  = first->next;
			}
			else
			{
				second = second->next;
				first  = first->next;
			}
		}

		return first;
	}
};
*/

/*
//Check if given preorder traversal is valid BST
string isValid(vector<int> a)
{

	stack<int> s;

	int root = INT_MIN;
	int n	 = a.size();
	for(int i = 0; i < n; i++)
	{

		if(a[i] < root) return "NO";

		while(!s.empty() && s.top() < a[i])
		{
			root = s.top();
			s.pop();
		}
		s.push(a[i]);
	}
	return "YES";
}

int main()
{

	vector<int> a = {40, 30, 35, 80, 100};
	cout << isValid(a);
	return 0;
}

*/

/*
DSUBSSEQ SPOJ
long long int dp[100000 + 10], last[200], mod = 1000000007;

char str[100000 + 10];

int solution()
{

	scanf("%s", str + 1);

	int n = strlen(str + 1);

	dp[0] = 1;

	for(int i = 1; i <= n; i++)
	{
		dp[i] = (dp[i - 1] * 2) % mod;
		if(last[str[i]]) dp[i] = (dp[i] - dp[last[str[i]] - 1] + mod) % mod;
		last[str[i]] = i;
	}
	return dp[n];
}

int main()
{
	cout << solution();
}
*/

/*
Longest Common Subsequence int lcs(string str1, string str2, int i, int j)
{

	if(i == 0 || j == 0) return 0;

	if(str1[i] == str2[j]) { return (lcs(str1, str2, i - 1, j - 1) + 1); }
	else
	{
		return max(lcs(str1, str2, i - 1, j), lcs(str1, str2, i, j - 1));
	}
}

int lcsDP(string str1, string str2, int m, int n)
{

	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

	if(m == 0 || n == 0) return 0;

	for(int i = 1; i <= str1.size(); i++)
	{
		for(int j = 1; j <= str2.size(); j++)
		{
			if(str1[i - 1] == str2[j - 1]) { dp[i][j] = 1 + dp[i - 1][j - 1]; }
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		cout << endl;
	}
	for(int i = 0; i <= str1.size(); i++)
	{
		for(int j = 0; j <= str2.size(); j++)
		{
			cout << dp[i][j] << "\t";
		}
		cout << endl;
	}
	return dp[m][n];
}

int main()
{

	string str1 = "AGGTAB";
	string str2 = "GXTXAYB";
	int	   i	= str1.size();
	int	   j	= str2.size();
	cout << lcsDP(str1, str2, i, j);

	return 0;
}
*/

/* Longest Increasing Subsequence

int LIS(const vector<int>& nums)
{
	int			res = 0;
	vector<int> dp(nums.size(), 1);
	for(int i = 0; i < nums.size(); i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(nums[j] > nums[i]) { dp[i] = max(dp[i], dp[j] + 1); }
		}
	}
	for(int i = 0; i < nums.size(); i++)
	{
		res = max(res, dp[i]);
	}
	return res;
}

int main()
{
	vector<int> nums = {1, 4, 3, 4, 2, 3};
	cout << LIS(nums);
	return 0;
}

*/

/*
int longestsubstringwithoutrepeatingcharacters(string str)
{
	int last[200];
	memset(last, 0, sizeof(last));
	vector<int> dp(str.size(), 1);
	last[str[0]] = 1;	 //set the first or index 0 at string in last found array
	for(int i = 1; i < str.size(); i++)
	{
		if(last[str[i]])
		{
			dp[i]		 = max(dp[i - 1], i - (last[str[i]]) - 1);
			last[str[i]] = i;
		}
		else
		{
			dp[i]		 = dp[i - 1] + 1;
			last[str[i]] = i;
		}
	}
	int res = 0;
	for(int i = 0; i < dp.size(); i++)
	{
		res = max(res, dp[i]);
	}
	return res;
}

int main()
{
	string str = "geeksforgeeks";
	cout << longestsubstringwithoutrepeatingcharacters(str);
	return 0;
}


*/

/* Collecting change problem 

int change(vector<int>& coins, int amount)
{

	vector<int> dp(amount + 1, amount + 1);
	dp[0] = 0;
	for(int i = 0; i < dp.size(); i++)
	{

		for(int coin : coins)
		{
			if(i - coin < 0) continue;
			dp[i] = min(dp[i], 1 + dp[i - coin]);
		}
	}
	for(int i = 0; i < dp.size(); i++)
	{
		cout << dp[i] << "\t";
	}
	return (dp[amount] == amount + 1) ? -1 : dp[amount];
}

int main()
{

	vector<int> coins = {1, 2, 5};
	int			amt;
	cin >> amt;
	cout << change(coins, amt);
	return 0;
}
*/

/*
Definition of a binary tree node
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
*/

/*Definition of Linked list Node 

struct ListNode
{
	int		  val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL)
	{ }
};

*/

