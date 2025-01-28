#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод значений
    double a, b, c;
    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;

    // Проверка неравенств
    bool prov1 = (a < b);
    bool prov2 = (b < c);

    // Вывод результата
    if (prov1 && prov2) {
        cout << "Неравенства выполняются: a < b < c" << endl;
    }
    else {
        cout << "Неравенства не выполняются" << endl;
    }

    return 0;
}