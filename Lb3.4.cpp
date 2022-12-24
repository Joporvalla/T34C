#include <iostream>
#include <string>
#include "SoftwareProduct.h"
#include "OperatingSystem.h"
#include "TextEditor.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    OperatingSystem s1("Wetrov", 2008, "MRT122", 2001);
    OperatingSystem s2("Wetrov", 1993, "MRT­121", 1999);
    TextEditor t1("Rogov", 28, "122.3", "Words");
    TextEditor t2("Wetrov", 25, "122.1", "World");
    SoftwareProduct* ps[4]; // Массив указателей на базовый класс
    //Объединяем объекты разных типов в одном массиве
    ps[0] = &s1;
    ps[1] = &s2;
    ps[2] = &t1;
    ps[3] = &t2;
    //Вывод данных с помощью массива указателей
    for (int i = 0; i < 4; i++) {
        ps[i]->show();
    }
    //Расчет среднего возраста
    string name_firm;
    cout << "Введите название фирмы " << endl;
    cin >> name_firm;
    int k = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ps[i]->getFirm() == name_firm) k = k++;
    }
    cout << "Фирм с названием " << name_firm << ": " << k << endl;

 
    int m;
    cout << "Впишите номер объекта, который хотите изменить (от 1 до 4):" << endl;
    cin >> m;
    string firm;
    int amount_memory;
    string version;
    cout << "Впишите новое значение firm:" << endl;
    cin >> firm;
    ps[m - 1]->setFirm(firm);

    cout << "Впишите новое значение amount_memory:" << endl;
    cin >> amount_memory;
    ps[m - 1]->setAmountMemory(amount_memory);

    cout << "Впишите новое значение version:" << endl;
    cin >> version;
    ps[m - 1]->setVersion(version);

    if (m == 1 || m == 2)
    {
        int release;
        cout << "Впишите новое значение release:" << endl;
        cin >> release;
        ps[m - 1]->setRelease(release);
    }
    if (m == 3 || m == 4)
    {
        string name;
        cout << "Впишите новое значение name:" << endl;
        cin >> name;
        ps[m - 1]->setName(name);
    }

}
