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
	string s = "731671765313306249192251196744265747423553491949349698352031277450632"
	"623957831801698480186947885184385861560789112949495459501737958331952853208805511"
	"125406987471585238630507156932909632952274430435576689664895044524452316173185640"
	"309871112172238311362229893423380308135336276614282806444486645238749303589072962"
	"904915604407723907138105158593079608667017242712188399879790879227492190169972088"
	"809377665727333001053367881220235421809751254540594752243525849077116705560136048"
	"395864467063244157221553975369781797784617406495514929086256932197846862248283972"
	"241375657056057490261407972968652414535100474821663704844031998900088952434506585"
	"412275886668811642717147992444292823086346567481391912316282458617866458359124566"
	"529476545682848912883142607690042242190226710556263211111093705442175069416589604"
	"080719840385096245544436298123098787992724428490918884580156166097919133875499200"
	"524063689912560717606058861164671094050775410022569831552000559357297257163626956"
	"1882670428252483600823257530420752963450";
	vector <int> arr;
	REP(i,s.size())
	{
		arr.pb(int(s[i])-48);
	}	
	ll product = 1;
	ll max = 0;
	int count = 0;
	int i=0;
	while(i<arr.size())
	{
		while(count!=13)
		{
			if(i > arr.size())
				break;
			if(arr[i] == 0)
			{
				count = 0;
				product = 1;
				i++;
			}
			else
			{
				product *= arr[i];
				count++;
				i++;
			}
		}
		if(count == 13)
		{
			if(arr[i] == 0)
			{
				i++;
				count = 0;
				product = 1;
			}
			else
			{
				product /= arr[i-13];
				product *= arr[i];
				if(max < product)
					max = product;
				i++;
			}
		}
	}
	cout<<max<<endl;
	return 0;
}