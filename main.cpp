#include <QCoreApplication>
#include <iostream>
#include <string>




class Building{
private:
    int year;
    std::string type;
public:

    //Building(){} //пустой конструктор

    Building(int y, std::string t){ //конструктор инициализатор
        //year = y;//чтобы эти данные не повторялись с функцией set_data, разумнее подставить сюда саму функцию set_data
        //type =t;

        set_data(y, t);
    }

    void set_data(int y, std::string t){
        year = y;
        type = t;
    }

    void get_info(){
        std::cout << "Тип: " << type << " Год постройки: " << year << std::endl;
    }

};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RU");
    QCoreApplication a(argc, argv);

    struct Time{
        int Hours = 0;
        int Minute = 0;
        int Second = 0;
    };
/*
    Building school;        //вот эти строки не соотвествуют принципу инкапсуляции
    school.year = 1978;
    school.type = "Школа";
    school.get_info();

    Building house;
    house.type = "Дом";
    house.year = 2010;
    house.get_info();*/


   /*Building house;           //теперь из-за инициализации конструктора, который принимает значения, мы не можем создавать
    house.set_data(2009, "Жилой дом");         //пустые объекты
    house.get_info();

    Building school;
    school.set_data(1979, "Школа");
    school.get_info();*/


    Building school(2000, "Школа");
    Building house(1991, "Жилой дом");
    school.get_info();
    house.get_info();

    return 0;
}
