#include <QTextStream>
#include <QString>
#include <QList>

QTextStream cout(stdout);
QTextStream cin(stdin);

int main()
{
    QString my_string = "Networking,Programming,Maths,Process Control,Digital systems";
    QList <QString> my_subject;

    int pos;
    for(int i=0; my_string.indexOf(',') != -1; i++)
    {
        pos = my_string.indexOf(',');
        my_subject.append(my_string.mid(0,pos));
        my_string.remove(0,pos+1);
    }
    my_subject.append(my_string);

    for(int i=0; i<5; i++)
        cout << my_subject[i]<<endl;
}
