#include<iostream>
#include<math.h>
#include<iomanip>
#include"factorial.h"
#include"sum.h"
#include"substraction.h"
#include"multiplication.h"
#include"division.h"
#include"power.h"
#include"squareroot.h"
#include"modulo.h"

using namespace std;

int main()
{
	int option;
	cout<<"\t\t**************** JMN Calculator ******************"<<endl;
	cout<<"\t\t--------------------------------------------------"<<endl;
	
	cout<<"\n\tSelect what function you want to use::"<<endl;
	
	cout<<"\n\t<1>Addition\t\t<2>Substraction\t\t<3>Multiplication\n";
	cout<<"\t<4>Division\t\t<5>Modulus\t\t<6>Factorial\n";
	cout<<"\t<7>Power\t\t<8>Square root\t\t"<<endl;
	
	cin>>option;
	
	switch(option)
	{
		case 1:
			sum();
			break;
			
		case 2:
			substraction();
			break;
			
		case 3:
		    multiplication();
			break;
			
		case 4:
		    division();
			break;
			
		case 5:
		    modulo();
			break;
			
		case 6:
		    factorial();
			break;
			
		case 7:
			power();
			break;
			
		case 8:
			squareroot();
			break;				
	}

}
