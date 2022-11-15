#include <iostream>
#include <Windows.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char name[100];
    char age[100];
    char learning[100];

    cout << "Введіть ваше ім'я: " << endl;
    cin.getline(name, 100);
    cout << "Ваш вік: " << endl;
    cin.getline(age, 100);
    cout << "місце де ви навчаєтеся: " << endl;
    cin.getline(learning, 100);
    
    cout << "\nДоброго дня, " << name << " !!!" << endl;
    cout << "Вам усього " << age << " років, а " << learning << " вже пишається вами!" << endl;

}
