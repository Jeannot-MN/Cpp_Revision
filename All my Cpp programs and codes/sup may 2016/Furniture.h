#include<iostream>
#include<string>

using namespace std;

void displayFurniture(int size, string furnCode[], string furnDescrp[], double furnPrice[], int stock[], double amounts[])
{
	cout<<"Furncode\tFurnDescription\tFurnPrice\tQuantity\tStocktotal"<<endl;
	for(int i=0; i<size; i++)
	{
		amounts[i] = stock[i]*furnPrice[i];
		cout<<furnCode[i]<<"\t\t"<<furnDescrp[i]<<"\tR"<<furnPrice[i]<<"\t"<<stock[i]<<"\t\tR"<<amounts[i]<<endl;
	}
}

double calcAmt(double furnPrice[], int position, int itemsBought)
{
	return ((furnPrice[position] * itemsBought) * 1.14);
}

void increaseAllPrices(double furnPrice[], double percentage, int size)
{
	for(int i=0; i<size; i++)
	{
		furnPrice[i] += furnPrice[i] * percentage / 100; 
	}
}

void reOderLevel(int stock[], string furnDescrp[], int size)
{
	for(int i=0; i<size; i++ )
	{
		if(stock[i]<=5)
		cout<<furnDescrp[i]<<" need to be reodered"<<endl;
	}
}

int searchFurnCode(string furnCode[], string codeSearched, int size)
{
	for(int i=0; i<size; i++)
	    if(codeSearched == furnCode[i])
		   return i;
	
	return 11;
	
}


