#include <iostream>
#include <fstream>
using namespace std;

#include "main.h"

void write(string name, string var, int res, string otv1, string otv2, string otv3, string otv4) {
    std::ofstream outresult("result.txt", std::ios::app);
    if (outresult.is_open()) {
        outresult << "Name: " << name << ", test: " << var << ", result: " << res << ", otvs: " << otv1 << ", " << otv2 << ", " << otv3 << ", " << otv4 << std::endl;
    }
    outresult.close();

    std::ofstream outsistem("ressistem.txt", std::ios::app);
    if (outsistem.is_open()) {
        outsistem << var << "^" << otv1 << "^" << otv2 << "^" << otv3 << "^" << otv4 << std::endl;
    }
    outsistem.close();
}

void test1(string name, string var) {
    int res = 0;
    string otv1, otv2, otv3, otv4;

    if (name != "test") {
        cout << endl << "1. Заися ..." << endl;
        cout << "A: Сусаныч         B: Сасаныч          C: Сунсаныч         D: Сансаныч" << endl;
        cin >> otv1;
        if (otv1 == "d" || otv1 == "D") {
            res += 1;
        }

        cout << endl << "2. Какая игрушка есть у заи?" << endl;
        cout << "A: Пантера         B: Панда        C: Коала        D: Геккончик" << endl;
        cin >> otv2;
        if (otv2 == "c" || otv2 == "C") {
            res += 1;
        }

        cout << endl << "3. Придагается ..." << endl;
        cout << "A: Петух         B: Панда       C: Дедушка        D: Зая" << endl;
        cin >> otv3;
        if (otv3 == "a" || otv3 == "A") {
            res += 1;
        }

        cout << endl << "4. Зая ... когда я говорю с заей по видео-связи" << endl;
        cout << "A: Лает         B: Крутит головой          C: Пикает        D: Вырывается из рук" << endl;
        cin >> otv4;
        if (otv4 == "b" || otv4 == "B") {
            res += 1;
        }

        cout << "Вы набрали " << res << "/4 " << "очков!" << endl;
    } else if (name == "test") {
        otv1 = 'd';
        otv2 = 'c';
        otv3 = 'a';
        otv4 = 'b';
        res = 4;
    }

    write(name, var, res, otv1, otv2, otv3, otv4);
}