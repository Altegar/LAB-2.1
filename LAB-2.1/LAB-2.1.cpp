// LAB-2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_02.cpp
// Сушинський Ігор
// Лабораторна робота №2.1
// Лінійні програми.
// Варіант 18

#include <iostream>;
#include <cmath>; // бібліотека математичних виразів

using namespace std;

int main()
{
    double a, z1, z2;

    cout << "a = "; cin >> a;

    z1 = (((a + 2) / (sqrt(2 * a))) - ((a) / (sqrt(2 * a) + 2)) + ((2) / (a - sqrt(2 * a))) * (sqrt(a) - sqrt(a)) / (a + 2));
    z2 = 1 / (sqrt(a) + sqrt(2));

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get(); // абоба
    return 0;
}