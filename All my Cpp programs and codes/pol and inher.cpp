#include<iostream>
#include<string>
using namespace std;

class App
{
	protected:
	int a;
	int b;
	
	public:
		App()
		{
			a=0;
			b=0;
		}
		void show()
		{
			cout<< a <<" | "<<b<<endl;
		}
		
};

class x : protected App
{
	public:
		void show()
		{
			cout<< a <<"  "<<b<<endl;
		}
};

int main()
{
	x jmn;
	
	jmn.show();
	
	system("PAUSE");
	return 0;
}


