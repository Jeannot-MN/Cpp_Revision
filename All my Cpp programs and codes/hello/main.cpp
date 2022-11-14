#include <iostream>

using namespace std;
int p=1;
int main()
{
    cout << "Hey Jeannot what is the base of your triangle" << endl;
    int base;
    cin>>base;
    do
    {

        for(int i=1;i<=p;i++)
        {
            cout<<"*";
        }
        p++;
        cout<<endl;
    }while(p<base);
    do
    {
        p--;
        for(int i=1;i<=p;i++)
        {
            cout<<"*";
        }

        cout<<endl;
    }while(p>=1);

    return 0;
}
