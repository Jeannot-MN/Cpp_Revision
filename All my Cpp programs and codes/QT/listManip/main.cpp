#include <QTextStream>
#include <QList>

QTextStream cout(stdout);
QTextStream cin(stdin);

void add_element(QList <int> &list)
{
    int input=0;

    while(input != -1 )
    {
        cout << "Enter a number and -1 to stop appending: ";
        cout.flush();
        input = cin.readLine().toInt();

        if(input != -1)
           list.append(input);
    }
}

int highiest(QList <int> list)
{
    int high = list.at(0);
    for(int i=1; i<list.size(); i++)
    {
        if(high < list.at(i))
           high = list.at(i);
    }

    return high;
}

int *lowest(int* start, int* end)
{
    int*low = start;
    for(int *i=start; i <=end; i++ )
    {
        if(*i < *low)
            *low = *i;
    }

    return low;
}

int main()
{
    QList <int> my_list;

    add_element(my_list);
    int size = my_list.size();
    cout << "The lowest element in the list is: " <<*lowest(&my_list[0], &my_list[size-1])<<endl;
    cout <<"The highest is "<<highiest(my_list)<<endl;
    system("pause");

}
