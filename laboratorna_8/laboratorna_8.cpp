#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c;

    cout << "Введіть 3 числа: \n";
    cin >> a >> b >> c;

    if (a < b && b < c) {
        cout << pow(a, 2);
        cout << ' ';
        cout << pow(b, 2);
        cout << ' ';
        cout << pow(c, 2);
    }
    else {
        cout << a * 2;
        cout << ' ';
        cout << b * 2;
        cout << ' ';
        cout << c * 2;
    }
}

//22////////////////////////////////////////////////////////////////////////

int main() {
    char dir;
    int cmd;

    cout << "Введіть початковий напрямок (N, E, S, W): ";
    cin >> dir;
    cout << "Введіть команду (0: продовжувати, 1: наліво, -1: направо): ";
    cin >> cmd;

    const char d[4] = { 'N', 'E', 'S', 'W' };
    int idx = -1;

    for (int i = 0; i < 4; ++i) {
        if (d[i] == dir) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        cout << "Помилка: некоректний напрямок." << endl;
        return 1;
    }

    if (cmd == 0) {
        cout << "Новий напрямок: " << dir << endl;
    }
    else if (cmd == 1) {
        idx = (idx - 1 + 4) % 4;
        cout << "Новий напрямок: " << d[idx] << endl;
    }
    else if (cmd == -1) {
        idx = (idx + 1) % 4;
        cout << "Новий напрямок: " << d[idx] << endl;
    }
    else {
        cout << "Помилка: некоректна команда." << endl;
        return 1;
    }

    return 0;
}

//33/////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int monthNumder;
    cin >> monthNumder;

    switch (monthNumder) {
        case 1:
        case 2:
        case 12:
            cout << "\n Зима";
            break;
        case 3:
        case 4:
        case 5:
            cout << "\n Весна";
            break;
        case 6:
        case 7:
        case 8:
            cout << "\n Літо";
            break;
        case 9:
        case 10:
        case 11:
            cout << "\n Осінь";
            break;
    }
}

//44//////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    double x, y, s;
    int choice;

    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;

    cout << "Оберіть функцію f(x):" << endl;
    cout << "1 - sinh(x)" << endl;
    cout << "2 - x^2" << endl;
    cout << "3 - exp(x)" << endl;
    cout << "Ваш вибір: ";
    cin >> choice;

    double fx;
    switch (choice) {
    case 1:
        fx = sinh(x);
        break;
    case 2:
        fx = x * x;
        break;
    case 3:
        fx = exp(x);
        break;
    default:
        cout << "Невірний вибір!" << endl;
        return 1;
    }

    if (abs(x * y) > 10) {
        s = fx + log(y);
    }
    else if (5 < abs(x * y) && abs(x * y) <= 10) {
        s = exp(fx + y);
    }
    else if (abs(x * y) == 5) {
        s = sin(x) + tan(y);
    }
    else {
        cout << "Умова не виконується!" << endl;
        return 1;
    }

    cout << "Результат: s = " << s << endl;

    return 0;
}


//5.1//////////////////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;
    cout << "Введіть координати точки (x y): ";
    cin >> x >> y;

    if (x >= 1 && x <= 4 && y >= 2 && y <= 4) {
        if ((x - 1) * (x - 1) + (y - 2) * (y - 2) >= 1) {
            cout << "Точка належить заштрихованій області.\n";
            return 0;
        }
    }

    if (y <= 0) {
        if (y >= x) {
            if (y >= -x) {
                cout << "Точка належить заштрихованій області.\n";
                return 0;
            }
        }
    }

    cout << "Точка не належить заштрихованій області.\n";
    return 0;
}

//5.2////////////////////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    if ((x * x + y * y <= 9 && x >= 0) || (y >= -0.5 * x + 3 && y <= 0.5 * x + 3 && x <= 0)) {
        cout << "Точка належить заштрихованій області." << endl;
    }
    else {
        cout << "Точка не належить заштрихованій області." << endl;
    }

    return 0;
}

//66////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, x, y;

    cin >> a >> b >> c;
    cin >> x >> y;

    if ((a <= x && b <= y) || (a <= y && b <= x) ||
        (a <= x && c <= y) || (a <= y && c <= x) ||
        (b <= x && c <= y) || (b <= y && c <= x)) {
        cout << "Цеглина пройде через отвір.\n";
    }
    else {
        cout << "Цеглина не пройде через отвір.\n";
    }

    return 0;
}