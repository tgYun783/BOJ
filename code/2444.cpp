#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			cout << ' ';
		}
		for(int j=0; j<2*i+1; j+=1)
		{
			cout << '*';
		}
		cout << '\n';
	}
	for(int i=n-2; i>=0; i--)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			cout << ' ';
		}
		for(int j=0; j<2*i+1; j+=1)
		{
			cout << '*';
		}
		cout << '\n';
	}
}