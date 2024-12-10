#include <QCoreApplication>
#include <iostream>
#include <string>


using namespace std;

class Rabotnik{
private:
    string name;
    int year;
    string second_name;

public:
    Rabotnik(string name, int year, string second_name){
        this->name = name; //в данном случае this как бы конкретизирует, что мы обращаемся именно к переменной и именно данного класса
        this->year = year;
        this->second_name = second_name;
    }

    void set_name(string name){
        this->name = name; //в данном случае this как бы конкретизирует, что мы обращаемся именно к переменной и именно данного класса
    }
    void set_year(int year){
        this->year = year;
    }

    void set_second_name(int second_name){
        this->second_name = second_name;
    }

    void get_info(){
        cout << "Имя: " << name << endl;
        cout << "Фамилия: " << second_name << endl;
        cout << "Возраст: " << year << endl;
    }
};

class Building{
private:
    int year;
    string type;
public:

    //Building(){} //пустой конструктор

    Building(int y, string t){ //конструктор инициализатор
        //year = y;//чтобы эти данные не повторялись с функцией set_data, разумнее подставить сюда саму функцию set_data
        //type =t;

        set_data(y, t);
    }

    Building(){} //пример перегрузки конструктора

    Building(int y){ //второй пример перегрузки конструтора. При создании объекта класса, мы можем выбрать любой конструктор
        year = y;
        cout << "Ты воспользовался другим конструтором" << endl;
    }

    ~Building(){
        cout << "Объект удален" << endl;
    }

    void set_data(int y, string t){
        year = y;
        type = t;
    }

    void get_info(){
        cout << "Тип: " << type << " Год постройки: " << year << endl;
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
    Building hospital(1982);

    Rabotnik enjiener("Рома", 25, "Бычков");
    enjiener.get_info();
    enjiener.set_name("Вася");
    enjiener.get_info();


    return 0;
}
