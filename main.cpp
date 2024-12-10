#include <QCoreApplication>
#include <iostream>
#include <string>
//Параграф дружественные функции для двух разных классов. Нужны нам, когда мы хотим
//использовать в какой-либо функции две переменные разных классов

using namespace std;

class Car; //формальная декларация названия Car, нужна чтобы в 23 строке компилятор не удивился слову Car, так как класс Car
class Person{   //будет объявлен только в 26 строки
private:
    string name;
    string second_name;
    int age;

public:
    Person(string name, string second_name, int age){
        this->name = name;
        this->second_name = second_name;
        this->age = age;
    }

    friend void print(Person& name, Person& second_name, Person& age, Car& marka); //friend - ключевое слово, для объявления
};                                                                             //дружественной функции

class Car{
private:
    string marka;
    int horse_power;

public:
    friend void print(Person& name, Person& second_name, Person& age, Car& marka); //во втором классе также нужно объявить
    Car(string marka, int horse_power){                                            //дружественную функцию через ключевое слово friend
        this->marka = marka;
        this->horse_power = horse_power;
    }
};


void print(Person& name, Person& second_name, Person& age, Car& marka){//код дружественной функции
    cout << "Имя владельца: " << name.name << " Фамилия владельца: " << second_name.second_name<< " Возраст: "\
         << age.age << " Марка авто: " << marka.marka << endl;
}



int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RU");
    QCoreApplication a(argc, argv);

    Person name("Рома", "Бычков", 25);
    Car marka("BMW", 249);

    print(name, name, name, marka);

    return 0;
}
