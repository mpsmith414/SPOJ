//One.cpp  ---- 1. Life, the Universe, and Everything
//
//Your program is to use the brute-force approach in order to find the 
//Answer to Life, the Universe, and Everything. More precisely... 
//rewrite small numbers from input to output. 
//Stop processing input after reading in the number 42. 
//All numbers at input are integers of one or two digits.

// Status - Accepted.


#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int i = 0;
	do
	{
		cin >> i;
		v.push_back(i);
	} while(i != 42);

	for(vector<int>::size_type i=0; i<v.size(); i++)
	{
		if(v[i] == 42)
			break;
		else 
			cout << v[i] << endl;
	}
	return 0;
}
