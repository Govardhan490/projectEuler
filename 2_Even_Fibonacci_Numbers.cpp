//In the Name of God

#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

int main()
{
	ll sum = 2; // Initializing sum to 2 
	ll a = 2;	// ignoring 1 here and directly going to take a as 2
	ll b = 3;  // 1+2 = 3 3rd number in the sequence
	ll c;		// just a place holder
	while(b <= 4000000)
	{
		if(b%2 == 0)
			sum += b;
		c = b+a;
		a = b;
		b = c;
	}
	cout<<sum<<endl;
}