#include <QTextStream>
#include <QString>
#include <QFile>
#include<cstdlib>
#include<time.h>

QTextStream cout(stdout);
QTextStream cin(stdin);

int main()
{
    QString my_file = "data.txt";
    QString odd = "odd.txt";
    srand(time(0));

    QFile ofStream(my_file);
    QFile ofStream2(odd);

    if(ofStream.open(QIODevice::ReadWrite))
    {
        QTextStream outFile(&ofStream);

        //QTextStream inFile(&ofStream);

        for(int i=0; i<300; i++)
            outFile << rand()%1000 <<endl;

        /*if(ofStream2.open(QIODevice::WriteOnly))
        {
            QTextStream outFile2(&ofStream2);
            while(outFile.readLine().toInt() %2!=0 && outFile.readLine()!= NULL)
            {
               outFile2 << outFile.readLine().toInt()<<endl;
            }
        }

        else
            cout <<"The second file could not be opened"<<endl;
        */
        while(outFile.readLine()!=NULL)
        {
            cout << outFile.readLine()<<endl;
        }

    }
    else
        cout << "The file could not be opened"<<endl;


    ofStream.close();
    ofStream2.close();


}
