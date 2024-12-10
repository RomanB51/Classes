#include <QCoreApplication>
#include <iostream>
#include <string>
//Параграф дружественные классы. Подобная вещь позволет нам сделать так, чтобы методы класса В могли обращаться к переменным класса А.

using namespace std;

class MainHeroe; //формальная декларация класса MainHeroe, чтобы компилятор не ругался в 14 строке, так как MainHeroe будет объявлено
class Vrag{      //только в 17 строке
private:
    int health = 100;

public:
    friend class MainHeroe;    //объявление класса MainHeroe дружественным для класса Vrag
};

class MainHeroe{
public:
    void damage(Vrag& vrag){
        vrag.health -=20;
        cout << vrag.health << endl;
    }

    void heal(Vrag& vrag){
        vrag.health += 20;
        cout << vrag.health << endl;
    }

    void kill(Vrag& vrag){     //принимает объект класса Vrag
        vrag.health = 0;
        cout << vrag.health << endl;
    }
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RU");
    QCoreApplication a(argc, argv);

    Vrag anybody;
    MainHeroe Im;

    Im.damage(anybody);

    Im.kill(anybody);


    return 0;
}
