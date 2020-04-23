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

int isPalindrome(int product)
{
	vector <int> arr;
	while(product > 0)
	{
		arr.push_back(product%10);
		product/=10;
	}
	int a = 0;
	int b = arr.size()-1;
	while(a<b)
	{
		if(arr[a]!=arr[b])
			return 0;
		a++;
		b--;
	}
	return 1;
}

int main()
{
	int max = 1;
	FOR(i,100,999)
	{
		FOR(j,100,999)
		{
			int product = i*j;
			if(isPalindrome(product))
				if(max < product)
					max = product;
		}
	}
	print("%d\n",max);
}