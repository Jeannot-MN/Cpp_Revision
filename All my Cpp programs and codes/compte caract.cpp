#include <iostream>
using namespace std;
char c;
char n;
int ne=0;
main()
{
	cout<<"Quelle lettre veut tu que je compte?"<<endl;
	cin>>n;
    cout<<"Entrer un mot termine par un point"<<endl;
	
	do
	{
		cin>>c;
		if(c==n)
		{
		  ne=ne+1;	
		}
	}
	while(c!='.');
	cout<<"je compte "<< ne <<" caracteres "<< n<<endl;
	system("pause"); 
	return 0;
}
