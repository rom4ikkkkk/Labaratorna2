
#include <iostream>
#include <Windows.h>

using namespace std;

 int main()
{

        setlocale(LC_ALL, "Russian");
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);

        float a;
        float b;
        float f;

        cout << "Введіть два будь яких числа" << endl;

        cout << "\nA: ";
        cin >> a;
        cout << "B: ";
        cin >> b;
        
        cout << "\nA=" << a << " B=" << b << endl;

        cout << "\nТепер поміняймо місцями ці значення:" << endl;

        f = b; b = a; a = f;

        cout << "\nA=" << a << " B=" << b << endl;
       
  

}

