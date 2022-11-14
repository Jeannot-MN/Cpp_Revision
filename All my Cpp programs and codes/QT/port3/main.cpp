#include <QTextStream>
#include <QString>
#include <QStringList>

QTextStream cout(stdout);
QTextStream cin(stdin);

int main()
{
    QString my_string = "Networking,Programming,Maths,Process Control,Digital systems";
    QStringList my_subject;

    my_subject = my_string.split(",");

    for(int i=0; i<5; i++)
        cout << my_subject[i]<<endl;
}
