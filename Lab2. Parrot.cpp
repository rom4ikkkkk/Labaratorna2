#include <iostream>
#include <Windows.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char b[100];
    cout << "Введіть строку будь яких символів:" << endl;
    cin.getline(b, 100); cout << b;

}
