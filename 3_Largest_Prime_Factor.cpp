//In the Name of God

#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

ll maxPrime(ll num)
{
	ll maxprime = -1; // Initialize MaxPrime
	while(num%2 == 0) //If the num is even then divide by 2 until it becomes odd
	{
		num>>=1;
		maxprime = 2;
	}

	for (int i = 3; i < sqrt(num); i+=2)  //Now check the odd numers from rabge 3 to sqrt(n)
	{
		while(num%i==0)
		{
			num = num/i;
			maxprime = i;	//Update Maxprime
		}
	}

	if(num > 2)			// If num itself is prime then it will greater than 2 now hence update maxprime as num
		maxprime = num;

	return maxprime;
}


int main()
{
	ll num = 600851475143;
	cout<<maxPrime(num)<<endl;
}