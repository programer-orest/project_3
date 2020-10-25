// Lab_03_4.cpp
// < Якиміва Ореста >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 27
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -R)
        y = R;
    else
        if (-R < x && x <= R)
            y = -sqrt(R * R - x * x) - R;
        else
            if (R < x && x <= 6)
                y = R+(-3-R)*(x-3)/(6-R);
            else
                y = x - 9;

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}