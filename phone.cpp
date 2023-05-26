#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

class Phone {
    char* name;
    int iphone;
    char* info;

public:
    Phone(const char* uname, int tel, const char* uinfo) {
        name = new char[strlen(uname) + 1];
        info = new char[strlen(uinfo) + 1];

        iphone = tel;

        strcpy(name, uname);
        strcpy(info, uinfo);
    }

    Phone() :Phone("Noname", 000, "None") {};

    void setName(const char* uname) {
        delete[] name;
        name = new char[strlen(uname) + 1];
        strcpy(name, uname);
    }

    void setInfo(const char* uinfo) {
        delete[] info;
        info = new char[strlen(uinfo) + 1];
        strcpy(info, uinfo);
    }
    void setIphone(int phone) {
        iphone = phone;
    }

    void print() {
        cout << "Имя: " << name << endl;
        cout << "Номер: " << iphone << endl;
        cout << "Инфа: " << info << endl;
    }

    const char* getName() {
        return name;
    }
    const char* getInfo() {
        return info;
    }
    int getIphone() {
        return iphone;
    }
    ~Phone() {
        delete[] name;
        delete[] info;
        cout << iphone << " Выключен\n";
    }
};

int main() {

    setlocale(0, "");
    srand(time(NULL));

    Phone p { "Константин",103321,"Лекарь" };
    p.print(); cout << endl;

    Phone d{ "Олег",5677765,"Коллектор(не брать)" };
    d.print(); cout << endl;
}
