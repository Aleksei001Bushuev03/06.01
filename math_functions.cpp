#include "math_functions.h"
#include <stdexcept>

// Определение функции сложения
double add(double a, double b) {
    return a + b;
}

// Определение функции вычитания
double subtract(double a, double b) {
    return a - b;
}

// Определение функции умножения
double multiply(double a, double b) {
    return a * b;
}

// Определение функции деления
double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Ошибка: деление на ноль");
    }
    return a / b;
}

// Определение функции возведения в степень
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < abs(exponent); ++i) {
        result *= base;
    }
    return (exponent < 0) ? 1.0 / result : result;
}
