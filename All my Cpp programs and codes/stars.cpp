#include<iostream>
using namespace std;
char c='*';
int base;
int bc=0;
int cnt=0;
int main()
{
	cout<<"What is the base of the Triangle?"<<endl;
	cin>>base;
	do
	{ 
	  
	  for(cnt=1; cnt<=bc ; cnt++)
	    {
		    cout<< c;
        }
      bc++;
      cout<<" "<<endl; 
    }while(bc<=base);
    system("pause");
	return 0;
}
