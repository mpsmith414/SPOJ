//1688.cpp		1688. A Very Easy Problem!

/*
Output some form of these numbers: 137, 1315, 73, 136, 255, 1384, 16385, one per line in the listed order.

Example
The first two lines of the CORRECT output file are:

137=2(2(2)+2+2(0))+2(2+2(0))+2(0)
1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)

The correct output file should contain 7 lines.
*/

//Status: Accepted

#include <iostream>
using namespace std;

int main()
{
	cout << "137=2(2(2)+2+2(0))+2(2+2(0))+2(0)" << endl <<
			"1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)" << endl <<
			"73=2(2(2)+2)+2(2+2(0))+2(0)" << endl <<
			"136=2(2(2)+2+2(0))+2(2+2(0))" << endl <<
			"255=2(2(2)+2+2(0))+2(2(2)+2)+2(2(2)+2(0))+2(2(2))+2(2+2(0))+2(2)+2+2(0)" << endl <<
			"1384=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2)+2(2(2)+2(0))+2(2+2(0))" << endl <<
			"16385=2(2(2+2(0))+2(2)+2)+2(0)" << endl;
	return 0;
}