// In the Name of God
#include<bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORE(i,a,b) for(int i=(a);i<=(b);i++)
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
	int flag = 0;
	int product = 1;
	REP(i,500)
	{
		FOR(j,i,500)
		{
			int i_square = i*i;
			int j_square = j*j;
			int k = (1000 - (i+j));
			int k_square = k*k;
			if(k > i && k > j)
			{
				if(k_square == i_square + j_square)
				{
					flag = 1;
					product = i*j*k;
					cout<<"numbers "<<i<<" "<<j<<" "<<k<<endl;
					break;
				}
			}
			else if(j > i && j > k)
			{
				if(j_square == i_square + k_square)
				{
					flag = 1;
					product = i*j*k;
					cout<<"numbers "<<i<<" "<<j<<" "<<k<<endl;
					break;
				}
			}
			else
			{
				if(i_square == j_square + k_square)
				{
					flag = 1;
					product = i*j*k;
					cout<<"numbers "<<i<<" "<<j<<" "<<k<<endl;
					break;
				}
			}
		}
		if(flag == 1)
			break;
	}
	cout<<"product "<<product<<endl;
	return 0;
}