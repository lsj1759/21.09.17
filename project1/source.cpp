#include <iostream>

using namespace std;

int main()
{
	// a  0 1  2  3  4  5  6  7  8  9 
	//   [2^32] [] [] [] [] [] [] [] [] [] 

	int Total = 0;

	for (int Count = 1; Count <= 100; Count++)
	{
		Total = Total + Count; 

	}

	cout << Total << endl;

	return 0;
}
