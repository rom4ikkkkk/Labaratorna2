﻿#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    float a;
    float b;
    float c;
    float f;

    cout << "Введіть три будь яких числа" << endl;

    cout << "\nA: ";
     cin >> a;
    cout << "B: ";
     cin >> b;
    cout << "С: ";
    cin >> c;
  

     cout << "\nA=" << a << " B=" << b << " C=" << c << endl;

    cout << "\nТепер поміняймо місцями ці значення:" << endl;

    f = c; c = b; b = a; a = f;

    cout << "\nA=" << a << " B=" << b << " C=" << c << endl;



}
