#include <iostream>

using namespace std;

int main()
{	
	int Max = 0;

	cin >> Max;

	for (int i = 0; i <= Max; i++)
	{
		for (int j = 0; j <= Max + i - 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
