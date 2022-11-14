#include<iostream>

using namespace std;

void populate_array(int array[4][4])
{
	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			cout << "Enter a value: ";
			cin >> array[r][c];
		}
		
	}
}

void calcAvgRow(int const array[4][4], int array_of_averages[4])
{
	
	for (int r = 0; r < 4; r++)
	{
		int sum = 0;
		for (int c = 0; c < 4; r++)
		{
			sum += array[r][c];
		}
		int average = sum / 4;

		array_of_averages[r] = average;
	}
}

void findHighRow(int const array[4][4], int array_of_highest[4])
{
	for (int r = 0; r < 4; r++)
	{
		for (int c = 1; c < 4; c++)
		{
			int high = array[0][c];
			if (array[r][c] > high)
			{
				high = array[r][c];
			}
			array_of_highest[r] = high;
		}
	}
}

int main()
{
	int my_array[4][4] = { { 1, 2, 3, 4 }, { 4, 3, 5, 2 }, { 1, 2, 3, 4 }, { 4, 3, 5, 2 } };
	int array_of_averages[4];
	int array_of_highest[4];

	calcAvgRow(my_array, array_of_averages);

	for (int i = 0; i < 4; i++)
		cout << array_of_averages[i] << endl;
	cout << endl << endl;
	findHighRow(my_array, array_of_highest);
	for (int i = 0; i < 4; i++)
		cout << array_of_highest[i] << endl;

	system("pause");
	return 0;
}
