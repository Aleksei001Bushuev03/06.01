#include <iostream>
#include "math_functions.h"

int main() {
    setlocale(LC_ALL, "Rus");

    double num1, num2;
    int operation;

    // Ввод данных от пользователя
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    try {
        double result;
        switch (operation) {
        case 1:
            result = add(num1, num2);
            std::cout << "Результат сложения: " << result << std::endl;
            break;
        case 2:
            result = subtract(num1, num2);
            std::cout << "Результат вычитания: " << result << std::endl;
            break;
        case 3:
            result = multiply(num1, num2);
            std::cout << "Результат умножения: " << result << std::endl;
            break;
        case 4:
            result = divide(num1, num2);
            std::cout << "Результат деления: " << result << std::endl;
            break;
        case 5:
            result = power(num1, static_cast<int>(num2));
            std::cout << num1 << " в степени " << num2 << " = " << result << std::endl;
            break;
        default:
            std::cout << "Неверный выбор операции!" << std::endl;
            break;
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
