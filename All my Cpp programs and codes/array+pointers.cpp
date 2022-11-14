#include <iostream>
using namespace std;

int sum_positive(const int* a, int n)
{
	int sum =0;
	for(int i=0; i<n; i++)
	{
		if(*a > 0 )
		{
			sum += *a;
		}
		a++;
	}
	return sum;
}

int main()
{
	int array[6] = {3, -3, 5, 2, -1, 2};
	
	cout<<"The sum of the positive number is "<<sum_positive(array, 6)<<endl;
	system("pause");
	return 0;
}
