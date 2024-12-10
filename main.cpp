#include <QCoreApplication>
#include <iostream>
#include <string>




class Building{
private:
    int year;
    std::string type;
public:
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

    Building house;
    house.set_data(2009, "Жилой дом");
    house.get_info();

    Building school;
    school.set_data(1979, "Школа");
    school.get_info();


    return 0;
}
