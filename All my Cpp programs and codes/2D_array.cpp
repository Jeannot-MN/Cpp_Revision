#include <iostream>
using namespace std;

int main()
{
	int my_array[4][4] = {{9, 5, 6, 2}, {1, 2, 3, 4}, {3, 6, 9, 0}, {3, 7, 2, 1}};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << my_array[i][j] << "  ";
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
