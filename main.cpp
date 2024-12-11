#include <QCoreApplication>
#include <iostream>
#include <string>
#include <deque>
//Шаблоны функций

using namespace std;

template <typename T, typename T2> //в угловых скобках непросто type T, а typename T, ты про это забыл!!!
void func(T& massive, T2 size){ //вместо типов array, vector... просто подставь T, не надо ее ставить в угловых скобках, как выше, ты про это забыл!!!
    for(const auto& elem : massive)
        cout << elem << endl;
}


int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RU");
    QCoreApplication a(argc, argv);

    string my_mass[] = {"gfhf", "ejkw", "jejehe", "jrjesd"}; //сначала объявил массив как array my_mass[] - это ошибка!!! Массив может быть int, float
    func(my_mass, size(my_mass));

    vector<int> vec = {1, 3, 4, 5, 9};
    func(vec, vec.size());
    return 0;


}
