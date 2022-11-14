#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<time.h>
using namespace std;

int main()
{
	srand(time(0));
	int face1 = 0;
	int face2 = 0;
	int face3 = 0;
	int face4 = 0;
	int face5 = 0;
	int face6 = 0;
	int face;
	
	for(int i=1; i<=6000000;i++)
	{
		face=rand() % 6 + 1;
		switch(face)
		{
			case 1:
				face1++;
				break;
		
            case 2:
				face2++;
				break;
			
			case 3:
				face3++;
				break;
				
			case 4:
				face4++;
				break;
				
			case 5:
				face5++;
				break;
				
			case 6:
				face6++;
				break;
				
			default:
			    cout<<"The program should not give value"<<endl;							
		}
		
	}
	
	cout<<"FACE\t\t\tCOUNTED"<<endl;
		cout<<"1\t\t\t"<<face1<<endl;
		cout<<"2\t\t\t"<<face2<<endl;
		cout<<"3\t\t\t"<<face3<<endl;
	    cout<<"4\t\t\t"<<face4<<endl;
	    cout<<"5\t\t\t"<<face5<<endl;
	    cout<<"6\t\t\t"<<face6<<endl;
	    
	    system("pause");
	    return 0;
}
