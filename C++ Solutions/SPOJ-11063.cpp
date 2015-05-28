//11063. AP - Complete The Series (Easy)

/*
Arithmatic and geometric Progressions are 2 of the well known progressions in maths.

Arithmatic progression(AP) is a set in which the difference between 2 numbers in constant. 
for eg, 1,3,5,7,9 .... In this series the difference between 2 numbers is 2.

 

The task here is very simple indeed.

You will be given the 3rd term , 3rd last term and the sum of the series. 
You need print length of the series & the series.
*/

//Status: WA - not sure whats wrong, seems to be working correctly

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;	//number of test cases
	cin >> t;
	vector<int> v;
	for(int i=0; i<t; i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
	}

	for(int i=0; i<t; i++)
	{
		long long third,thirdLast,inc;
		third = v[3*i];
		thirdLast = v[3*i+1];
		long long sum = v[3*i+2];
		long long eles;
		if( (sum%(third+thirdLast)) == 0)
			eles = 2*(sum/(third+thirdLast));
		else
			eles = 2*(sum/(third+thirdLast))+1;
		long long diffPosts = thirdLast - third;
		long long termsInside = eles-6;
		inc = diffPosts/(termsInside+1);
		cout << eles << endl;

		long long start = third-(2*inc);
		for(int i=0; i<eles; i++)
		{
			long outp = start+(inc*i);
			cout << outp << " ";
		}
		cout << endl;
	}
	return 0;
}