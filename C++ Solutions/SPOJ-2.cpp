//Two.cpp     2. Prime Generator
//Peter wants to generate some prime numbers for his cryptosystem. 
//Your task is to generate all prime numbers between two given numbers!

//isPrime function currently too slow to pass

#include <iostream>
#include <vector>
using namespace std;

void outputPrimes(int m, int n);
bool isPrime(int x);

int main()
{
	int t;
	cin >> t;  // t = number of test cases
	vector<int> v;

	for(int i=1;i<=t;i++)
	{
		int m,n;
		cin >> m >> n;
		v.push_back(m);
		v.push_back(n);
	}
	for(int i=0;i<=2*t-1;i+=2)
	{
		outputPrimes(v[i],v[i+1]);
		if((2*t-2) != i)
			cout << endl;
	}
	return 0;
}

void outputPrimes
	(
	int m,		//in
	int n		//in
	)
//Takes in two integer values and prints to standard output all
//of the prime numbers between the two(inclusive)
{
	for(int i=m; i<=n ;i++)
	{
		if(isPrime(i))
			cout << i << endl;
	}
}


bool isPrime
	(
	int x
	)
//Takes an integer value and returns true if prime and false if not
{
	if(x<2)
		return false;
	if(x==2 || x==3)
		return true;
	if(x%2 == 0)
		return false;
	for(int i=6; i*i<x; i+=6)
	{
		if(x%(i-1) == 0 || x%(i+1) == 0)
			return false;
	}
	return true;
}