#include<iostream>
using namespace std;


int main()
{
	int a, i, j;
	cin >> a;
	for (i = 0; i < a; i++)
	{
		for (j = 1; j < a - i; j++)
		{
			cout << " ";
		}
		for (j = 0; j < a; j++)
		{
			
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}