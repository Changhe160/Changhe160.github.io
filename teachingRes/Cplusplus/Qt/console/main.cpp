#include <QCoreApplication>
#include<QDebug>
#include<iostream>
#include<vector>
#include<string>
#include<Qstring>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<QString> vsq;
    vsq.push_back("Hello");
    vsq.push_back("World");
    vsq.push_back("Qt!");

    for(auto &i:vsq){
        qDebug()<<i;
    }

    vector<string> vs;
    vs.push_back("Hello");
    vs.push_back("World");
    vs.push_back("Qt!");
    for(auto &i:vs){
        cout<<i<<endl;
    }

    return a.exec();
}
