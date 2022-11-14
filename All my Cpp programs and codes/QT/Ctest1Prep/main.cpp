#include <QCoreApplication>
#include<QTextStream>
#include <QFile>
#include <QString>
#include <QList>

QTextStream cout(stdout);
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString file = "data.txt";
    QString name;
    QString surname;

    QFile ofstream(file);

    if(ofstream.open(QIODevice::WriteOnly))
    {
        for(int i=0; i<3; i++)
        {
            cout<<"Enter the name: ";
            cout.flush();
            name = cin.readLine();

            cout<<"Enter the surname: ";
            cout.flush();
            surname = cin.readLine();

            QTextStream outFile(&ofstream);

            outFile << QString("%1\t%2\n").arg(name).arg(surname);
        }
    }

    ofstream.close();
    return a.exec();
}
