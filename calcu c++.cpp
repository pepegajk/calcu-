#include <iostream>
#include <cmath>

using namespace std;


double add(double a, double b) {
    return a + b;
}


double subtract(double a, double b) {
    return a - b;
}


double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}


double squareRoot(double number) {
    if (number >= 0) {
        return sqrt(number);
    }
    else {
        cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа!" << endl;
        return 0;
    }
}


double percentOfNumber(double number) {
    return number * 0.01;
}


double factorial(double number) {
    if (number < 0) {
        cout << "Ошибка: факториал отрицательного числа не определен!" << endl;
        return 0;
    }
    else {
        double result = 1;
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    double num1, num2;

    do {
        cout << "Меню калькулятора:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Выберите операцию: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Введите число и степень: ";
            cin >> num1 >> num2;
            cout << "Результат: " << power(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << squareRoot(num1) << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << percentOfNumber(num1) << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << factorial(num1) << endl;
            break;
        case 9:
            cout << "Программа завершена." << endl;
            break;
        default:
            cout << "Ошибка: некорректный выбор операции!" << endl;
        }

        cout << endl;

    } while (choice != 9);

    return 0;
}