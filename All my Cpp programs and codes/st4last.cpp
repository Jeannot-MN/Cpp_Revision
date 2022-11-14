#include<iostream>
#include<string>
using namespace std;

void validateSales(string name[], double &salesAmount, int x );

int main()
{	
    string name[3]={"Jean", "Jin", "Luc"};
    double salesAmount;
    int i;
    
    validateSales(name,salesAmount, i);
}

void validateSales(string name[], double &salesAmount, int x )
{
	for (x=0; x<3; x++)
	{
		cout<<"Enter the sales amount for "<<name[x]<<" : ";
		cin >> salesAmount;
		
		if (salesAmount > 1500 || salesAmount < 1)
		{
			cout<<"Invalid sales amount"<<endl;
			x--;
		}
	}
};

double calcCommPercentage (int yearsOfExp[], int &comRate, double &yearsExpAmount, int x)
{
	
}


