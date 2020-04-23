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

int main()
{
	int n = 100;
	int sum = (n*(n+1))/2;
	int sumsquare = sum*sum; // (1 + 2 + 3 + ...)^2
	int squaresum = (n*(n+1)*(2*n+1))/6; // 1^2 +2^2 +3^2 ....
	cout<<sum<<endl;
	int res = sumsquare - squaresum;
	cout<<sumsquare<<" "<<squaresum<<endl;
	print("%d\n",res);
	return 0;
}