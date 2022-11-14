#include<iostream>
#include<string>
using namespace std;

bool isValid(int parcelWeight)
{
	bool validate;
	if(parcelWeight<=0)
	   validate = false;
	else
	   validate = true;   
	
	return validate;   
}

bool validateDistance( string distance)
{
	bool validate;
	if ( distance == "Local" || distance == "Long")
       validate = true;
	else
	   validate = false;	   
    
    return validate;
}

double determineCost( string distance, int parcelWeight, double hours)
{
	double cost;
	
	if(distance=="Local")
	{
		if(parcelWeight<5)
		{
			cost = 125.00;
		}
		
		else if(parcelWeight<=20)
		{
		    cost = 175.00;
		}
			
		else if(parcelWeight > 20 && parcelWeight <= 50)
		{
			cost = 250;
		}
				
		else
		{
			cost = hours * 95.00;
		}
	}
	
	else
	{
	    if(parcelWeight<5)
		{
			cost = 390.00;
	    }
		
	    else if(parcelWeight<=20)
		{
		    cost = 450.00;
		}
			    
		else
		{
			cost = hours * 95.00;
		}
			
	}
	
	return cost;
	
}

double calcAmountDue(char insurance, char priority, double cost, double &insAmount, double &prioAmount, double amountDue)
{
	if(insurance=='Y'&& priority=='Y')
	{
		insAmount = cost * 0.085;
		prioAmount = cost * 0.05;
		amountDue = cost + insAmount + prioAmount;
	}
	
	else if(insurance=='Y')
	{
		insAmount = cost * 0.085;
		prioAmount = 0.00;
		amountDue = cost + insAmount + prioAmount;
	}
	
	else if(priority=='Y')
	{
		insAmount = 0.00;
		prioAmount = cost * 0.05;
		amountDue = cost + insAmount + prioAmount;
	}
	
	else
	{
		insAmount = 0.00;
		prioAmount = 0.00;
		amountDue = cost;
	}
	
	
	return amountDue;
}
