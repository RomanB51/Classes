#include <QCoreApplication>
#include <iostream>
#include <string>
//Классы наследники

using namespace std;

class Annimal{
private:
    string name;

public:
    Annimal(const string& n){
        name = n;
    }

    string getName(){
        return name;
    }

    virtual string Voice() const = 0; //формальное объявление виртуальной функции в классе annimal, так как мы не создаем
//объекты класса annimal, то и фактическое создание метода в классе annimal нам не нужно. ОБРАТИ ВНИМАНИЕ НА КЛЮЧЕВОЕ СЛОВО
// virtual

    void new_name(){
        cout << "jhffjd";
    }
};

class Cat: public Annimal{
public:

    Cat(const string& n): Annimal(n){}

    string Voice() const override {//обрати внимание на ключевое слово override
        return "Meow";
    }

};

class Dog: public Annimal{
public:

    Dog(const string& n): Annimal(n){}//наследование конструктора

    string Voice() const override {//обрати внимание на ключевое слово override
        return "Woof";
    }
};

void Procces(Annimal& object){//функция вывода инфы
    cout << object.getName() << " Voice: " << object.Voice() << endl;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RU");
    QCoreApplication a(argc, argv);

    Cat Dasha("Даша");
    Dog Charli("Чарлик");

    Procces(Dasha);
    Procces(Charli);

    //Dasha.Annimal::new_name("Сима"); //Роди вот эту функцию
    //Procces(Dasha);
    Dasha.new_name();


    return 0;
}
