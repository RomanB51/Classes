#include <QCoreApplication>
#include <iostream>
#include <string>
//Классы наследники

using namespace std;

class PC{
protected:
    int diagonal;
    string Os;

public:
    PC(int diagonal, string Os){
        this->diagonal = diagonal;
        this->Os = Os;
    }

    void get_info(){
        cout << diagonal << endl;
        cout << Os << endl;
    }

    void func(){}
};

class Laptop: public PC{
private:
    double weight;

public:
    Laptop(int diagonal, string Os, double weight): PC(diagonal, Os){ //можно ли обойтись без этой ссылки на конструктор
        this->weight = weight;                                          //почему не работает передача ссылок
    }

    void get_info(){
        PC::get_info();
        cout << weight << endl;
    }

    void func_3(){}

};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RU");
    QCoreApplication a(argc, argv);

    Laptop Hp(16, "Hp", 1.650);
    PC g(13, "Linux");
    //Hp.get_info();
    Hp.PC::get_info(); //обращение к методу get_info() класса РС
    Hp.func(); //наследуем фунцию func из класса PC

    //Класс Laptop в отличии от класса PC содержит три переменные, а не две:
    cout<<"g:" << sizeof(g) << endl; //40кб
    cout<<"Hp: " << sizeof(Hp) << endl; //48кб

    return 0;
}
