#include<iostream>

using namespace std;

int main()
{
    int option;


    do
    {
        cout <<"Select any option to start:"<<endl;
        cout <<"1.Display all services"<<endl;
        cout <<"2.Check highest service provider"<<endl;
        cout <<"3.Search"<<endl;
        cout <<"4.Exit"<<endl;

        cin >> option;

        switch(option)
        {
            case 1:
                      displayServices(/*tu me tout les parametres comme c etait defini*/);
                      break;
            case 2:
                      determineHighest();
                      break;
            case 3:
                      double amount;
                      cout <<"Enter amount to search for: ";
                      cin >> amount;
                      search();
                      break;
            default:
                      cout<<"Invalid option"<<endl;


        }
    }while(option == 1 || option == 2 || option==3);

    cout <<"Good bye"<<endl;


    system("PAUSE");
    return 0;
}
