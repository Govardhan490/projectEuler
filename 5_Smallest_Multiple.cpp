// In the Name of God
#include<bits/stdc++.h>

//This logic works for finding lcm of n natural numbers not for array of elements

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define ll long long unsigned int
#define em emplace_back
#define pb push_back
#define INF 1e7+5
#define MOD 1e9+7
#define print printf
#define in scanf

using namespace std;

template<class type>
void displaySingle(type &arr)
{
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;
}

template<class type>
void displayDouble(type &arr)
{
	for(auto &&i : arr) 
	{
    	for(auto &&j : i) 
    		cout << j << " ";
    	cout << std::endl;
  	}

}


int main()
{
	int num = 20;
	vector <int> primes = {2,3,5,7,11,13,17,19};  //prime numbers below given number, should use sieve for larger numbers
	vector <int> powers;	//To store largest number below num which can be expressed as power of each prime number
	REP(i,primes.size())
	{
		int count = 1;
		while(pow(primes[i],count) < 20)
		{
			count++;
		}
		if(count == 2)
			powers.pb(primes[i]);
		else
			powers.pb(pow(primes[i],(count-1)));
	}
	ll result = 1;	
	REP(i,powers.size())
	{	
		result *= powers[i];	//Multiply everything in pow array to get result
	}
	cout<<result<<endl;
}