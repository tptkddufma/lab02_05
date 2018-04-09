#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	vector<int> nums;

	int num;


	while (cin >> num)
	{
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end());

	cout << "ordered array" << endl;

	for (vector<int>::size_type i = - 1 + nums.size(); i != -1; --i)
	{
		auto number = nums[i];
		cout << number << " ";
	}
		

	cout << endl;

}