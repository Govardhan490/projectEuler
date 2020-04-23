//In the Name of God

#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i < 1000; ++i)
	{
		if(i%3 == 0 || i%5 == 0)
			sum += i;
	}
	cout<<sum<<endl;
}