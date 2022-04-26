#include <iostream>
using namespace std;

#include "main.h"


string watname() {
    string name;
    string pass = "3D?g", PassCin, kirrilPass = "break";
    bool whille = false;

    while (whille == false) {
        cout << "Ваше имя?" << endl;
        cin >> name;
        cout << "" << endl;

        while (name == "test" || name == "testnorm") {
            cout << "Password?" << endl;
            cin >> PassCin;
            cout << "" << endl;

            if (PassCin == pass) {
                return name;
                whille = true;
            } else {
                cout << "Киррил, не ломай программе жизнь, введи нармальное имя). Ваше имя?" << endl;
                cin >> name;
                cout << "" << endl;
            }
        }

        while (name.find('^') != std::string::npos) {
            cout << "Киррил, не балуйся, введи имя без '^'). Ваше имя?"  << endl;
            cin >> name;
            cout << "" << endl;

            while (name == "test" || name == "testnorm") {
                cout << "Password?" << endl;
                cin >> PassCin;
                cout << "" << endl;
                if (PassCin == pass) {
                    return name;
                    whille = true;
                } else {
                    cout << "Киррил, не ломай программе жизнь, введи нармальное имя). Ваше имя?" << endl;
                    cin >> name;
                    cout << "" << endl;
                }
            }
            whille = true;
        }
        whille = true;
    }
    return name;
}

void wattest(string name) {
    string var;
    string varitg;
    bool whille1 = true;
    
    cout << "Тесты:" << endl;
    cout << "A: Заися!" << endl;
    cin >> var;

    while (whille1 == true) {
        if (var == "a" || var == "A") {
            cout << "Заися!" << endl;
            varitg = "Zaya";
            whille1 = false;;
            test1(name, varitg);
        } else {
            cout << "Wat you type?" << endl << endl;
        }
    }
}

void hello() {
    cout << "Это тест!" << endl << endl;
    cout << "Правила:" << endl;
    cout << "Вам дают вопросы и варианты ответов, вы вводите букву ответа!" << endl << endl;
}