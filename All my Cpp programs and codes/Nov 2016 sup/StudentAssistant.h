#include<iostream>
#include<string>
using namespace std;

bool isQualify(string qualification)
{
	if(qualification=="BTECH"||qualification=="MTECH"||qualification=="DTECH")
	{
		return true;
	}
	else
	    return false; 
}

double determineRate(string qualification)
{
	if (qualification =="BTECH")
		return 220.00;
			
	else if (qualification == "MTECH")
		return 320.00;
			
		
	else if(qualification == "DTECH")
		return 380.00;
				
}

void calcMonPayAndRev(double &mPayment, double &mTax, int hours, string qualification)
{
	mPayment = hours * determineRate(qualification) * 4;
	mTax = 0.00;
	
	if(mPayment >= 2500)
	{
		mTax = mPayment * 0.25;
		
		mPayment -= mTax;
	}

}

void highestPaid(double mPaymentList[], int size, double &highest, int &index)
{
	highest = 0;
	
	for(int i=0; i<size; i++)
	{
		if(mPaymentList[i]>highest)
		{
			highest=mPaymentList[i];
			index=i;
		}
	}
}

string checkForAsterisk(int index, double mPaymentList[])
{
	if (mPaymentList[index] >= 10000 )
	    return "*";
	else
	    return ".";    
}

void displayAllEmployee(string name[], string qualificationList[], int hoursList[], double mTaxList[], double mPaymentList[], int size)
{
	cout<<"Name\tQualif.\tHours\tRevenue\tMonth Pay."<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<name[i]<<"\t"<<qualificationList[i]<<"\t"<<hoursList[i]<<"\tR"<<mTaxList[i]<<"\tR"<<mPaymentList[i]<<checkForAsterisk(i, mPaymentList)<<endl;
	}
}



