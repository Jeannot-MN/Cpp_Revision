#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int option;
	
	cout<<"Enter 3  numbers!"<<endl;
	cin>>a>>b>>c;
	
	cout<<"What do you want the program to give you?"<<endl;
	
	cout<<"1.Greatest \n2.Least \n3.Sum"<<endl;
	cin>>option;
	
	switch (option)
	{
	case 1: 
	if(a>b && a>c)
	{
	    cout<<"The biggest number is "<<a<<endl;	
	}
	
	else if(b>c)
	{
	    cout<<"The biggest number is "<<b<<endl;	
	}
	else
	{
	    cout<<"The biggest number is "<<c<<endl;	
	}
	break;
	
	case 2:
		if(a<b && a<c)
	{
	    cout<<"The least number is "<<a<<endl;	
	}
	
	else if(b<a && b<a)
	{
	    cout<<"The least number is "<<b<<endl;	
	}
	else
	{
	    cout<<"The least number is "<<c<<endl;	
	}
	break;
	
	case 3:
		cout<<"The sum is "<<a+b+c<<endl;
		break;
		
    default:
    	cout<<"Wrong choice retry please"<<endl;
}
    system("pause");
    return 0;

}
