// In the Name of God
#include<bits/stdc++.h>

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

vector <bool> isprime(200000,true);
vector <int> primes;

void findPrimes()
{
	isprime[0] = isprime[1] = false;
	for(int i=2;(i*i)<=200000;i++)
	{
		if(isprime[i])
		{
			for (int j = i*i; j <= 200000; j+=i)
			{
				isprime[j] = false;
			}
		}
	}
}


int main()
{
	findPrimes();
	int count = 0;
	int i = 0;
	while(count != 10001)
	{
		if(isprime[i])
			count++;
		i++;
	}
	cout<<i-1<<endl;
	return 0;
}