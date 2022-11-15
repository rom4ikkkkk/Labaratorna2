#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    float x(100);

    cout << "\n\n\n\n\n\n\t\t\t\t Загадайте будь яке число від 0 до 100 \n\n\n\n\n\n\n\n\n" << endl;

    system("pause");
    system("cls");

    cout << "\n\n\n\n\n\n\t\t\t\t Загадане число помножте на 10 \n\n\n\n\n\n\n\n\n" << endl;

    system("pause");
    system("cls");

    cout << "\n\n\n\n\n\n\t\t\t\t Те що у вас вийшло поділіть на 2 \n\n\n\n\n\n\n\n\n" << endl;

    system("pause");
    system("cls");

    cout << "\n\n\n\n\n\n\t\t\t\t  Від того що у вас вийшло відніміть 5 \n\n\n\n\n\n\n\n\n" << endl;


    system("pause");
    system("cls");

    cout << "\n\n\n\n\n\n\t\t\t\t До того що у вас вийшло додайте 4 \n\n\n\n\n\n\n\n\n" << endl;


    system("pause");
    system("cls");


    cout << "\n\n\n\n\n\n\t\t\t\t Введіть число яке у вас вийшло: ";
    cin >> x;

    system("cls");

    cout << "\n\n\n\n\n\n\t\t\t\t Число яке ви загадали: " << ((((x - 4) + 5) * 2) / 10) << "\n\n\n\n\n\n\t\t\t\t" << endl;

    system("pause");
    system("cls");


}

    


