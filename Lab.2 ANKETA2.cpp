#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char surname[100];
    char name[100];
    char patronymic[100];
    char sex[100];
    char dob[100];
    char address[100];
    char phone[100];
    char learning[100];
    char group[100];
    char hobby[100];

    cout << "Введіть будь ласка ваші данні." << endl;

    cout << "\n Прізвище: ";
    cin.getline(surname, 100);
    cout << "\n Ім'я: ";
    cin.getline(name, 100);
    cout << "\n По батькові: ";
    cin.getline(patronymic, 100);
    cout << "\n Стать: ";
    cin.getline(sex, 100);
    cout << "\n Дата народження: ";
    cin.getline(dob, 100);
    cout << "\n Адресса: ";
    cin.getline(address, 100);
    cout << "\n Номаер телефону: ";
    cin.getline(phone, 100);
    cout << "\n Місце навчання: ";
    cin.getline(learning, 100);
    cout << "\n Група: ";
    cin.getline(group, 100);
    cout << "\n Хоббі: ";
    cin.getline(hobby, 100);


    cout << "\n       Призвіще : " << surname << endl;
    cout << "           Ім'я : " << name << endl;
    cout << "    По батькові : " << patronymic << endl;
    cout << "          Стать : " << sex << endl;
    cout << "Дата народження : " << dob << endl;
    cout << "        Адресса : " << address << endl;
    cout << "Номаер телефону : " << phone << endl;
    cout << " Місце навчання : " << learning << endl;
    cout << "          Група : " << group << endl;
    cout << "          Хоббі : " << hobby << endl;

  
}
