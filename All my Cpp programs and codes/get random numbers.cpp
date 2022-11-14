/*Program that assign random number to variables
and also calculate the average of those numbers*/

//Design by Jeannot MN on the 17 Feb 2018 qt 23:52

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;

int main()
{
	//Initiate the random number generator
	
	srand(time(0));
	
	//Declarations
	
	int nbOne= rand( )%6+1;
	int nbTwo= rand( )%6+1;
	int nbThree= rand( )%6+1;
	int nbFour= rand( )%6+1;
	int nbFive= rand( )%6+1;
	double average;
	
	//Display all the assigned values
	
	cout<<"The first number is: "<<setw(6) << nbOne <<endl;
	cout<<"The second number is: "<<setw(6) << nbTwo <<endl;
	cout<<"The third number is: "<<setw(6) << nbThree <<endl;
	cout<<"The fourth number is: "<<setw(6) << nbFour <<endl;
	cout<<"The fifth number is: "<<setw(6) << nbFive <<endl;
	
	//Find and display the average
	
	average= (double) (nbOne + nbTwo + nbThree + nbFour + nbFive) / 5;
	cout<< setprecision(2)<< setiosflags(ios::fixed);//fixes two digits after the comma
	cout<<"The average is "<<setw(6) << average <<endl;
	
	//Wait until the user press any key
	
	system("pause");
	
	//End the program
	return 0;
}
