#include<iostream>
using namespace std;

int main()
{
	int a, i, j,b=1;
	cin >> a;
	
	for (i = 1; i <= a; i++)
	{
		for (j = 0; j < a - i; j++)
		{
			cout << " ";
		}
		for (j = i; j < a + i; j++)
		{
			if (i == 1 || i == a || j == i || j == a+i-1)
				printf("*");
			else
				cout << " ";

		}
		cout << "\n";
	}
	return 0;
}