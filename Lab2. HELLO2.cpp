
#include <iostream>
#include <Windows.h>

using namespace std;

int main()

 {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    

    char b[100];
       cout << "Введіть ваше ім'я:" << endl;
       cin.getline(b,100);
       cout << "Вітаємо " << b << " !!!" << endl << endl;
    
}
