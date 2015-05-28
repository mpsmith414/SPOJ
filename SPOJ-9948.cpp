//9948.cpp		9948. Will it ever stop

/*
When Bob was in library in University of Warsaw he saw on one of facades caption :"Will it ever stop?" and below some mysterious code:

while n > 1
  if n mod 2 = 0 then
    n:=n/2
  else
    n:=3*n+3

Help him finding it out !
*/

//Status: Accepted

#include <iostream>
using namespace std;

int main()
{
	unsigned long long n;
	cin >> n;

	while(n>1)
	{
		if(n==3)
		{
			cout << "NIE\n";
			return(0);
		}
		else if(n%2==0)
			n=n/2;
		else
			n=(3*n)+3;
	}
	cout << "TAK\n";
	return(0);
}