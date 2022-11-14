#include <iostream>
#include <string>

using namespace std;

class Commuter
{
private:
    string name;
    char id_number;
    double tot_amount;
    double tot_km;
    char gender;

 public:
    Commuter()
    {
        name = "None";
        id_number = 'x';
        tot_amount = 0;
        tot_km =0;
        gender = 'X';
    }

    void set(string n, char id, double t1, double tk, char gen)
    {
        if(n == "")
        {
            cout <<"Invalid name!!!"<<endl;
        }
        else
        {
            name = n;

            if(id != '1' && id!='2' && id!='3')
            {
                cout <<"Invalid Id"<<endl;
            }
            else
            {
                id_num = id;

                if(gen!='f' && gen!='F' && gen !='m' && gen!='M')
                {
                    cout<<"Invalid gneder"<<endl;
                }
                else
                {
                    gender = gen;
                }
            }

        }
    }

    string get_name()
    {
        return name;
    }

    char get_id()
    {
        return id_number;
    }


};
