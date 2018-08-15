#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void evenFac(int n1)
    {
        QVector<int>ve1;
        QVector<int>ve2;
        int j1=0, si1=0, si2=0, j2=0;
        for(int i1=1;i1<n1;i1++)
        {
            if(n1%i1==0)
            {
                si1++;
                ve1.resize(si1);
                ve1[j1] = i1;
                j1++;
            }            
        }
        for(int i2=0;i2<ve1.size();i2++)
        {
            if(ve1[i2]%2==0)
            {
                si2++;
                ve2.resize(si2);
                ve2[j2]=ve1[i2];
                j2++;
            }
        }
        int res1=0;
        for(int i3=0;i3<ve2.size();i3++)
        {   res1 += ve2[i3];     }
        qDebug() << n1 << ve1 <<"\n" <<  ve2<< "\n res = " << res1;
    }


};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.evenFac(300);

    for(int i1=1;i1<100;i1++)
    {
//        int n1=qrand()%100;
//        int n2=qrand()%90;
    }
    return a.exec();
}
