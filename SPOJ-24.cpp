//TwentyFour.cpp		24. Small factorials

/*
You are asked to calculate factorials of some small positive integers.

Input:
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, 
each containing a single integer n, 1<=n<=100.

Output:
For each integer n given at input, display a line with the value of n!
*/

//Status: need to adjust factorial function to do large calculations (using an array)

#include <iostream>
#include <vector>
using namespace std;

unsigned __int64 factorial
	(
	int i	//in
	)
{
	if(i==1)
		return 1;
	else
		return i*factorial(i-1);
}

int main()
{
	int t;	//test cases
	cin >> t;
	vector<int> v;

	for(int i=0; i<t; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	for(vector<int>::size_type i=0;i<v.size();i++)
	{
		cout << factorial(v[i]) << endl;
	}
	return 0;
}