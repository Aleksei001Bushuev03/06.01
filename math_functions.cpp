#include "math_functions.h"
#include <stdexcept>

// ����������� ������� ��������
double add(double a, double b) {
    return a + b;
}

// ����������� ������� ���������
double subtract(double a, double b) {
    return a - b;
}

// ����������� ������� ���������
double multiply(double a, double b) {
    return a * b;
}

// ����������� ������� �������
double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("������: ������� �� ����");
    }
    return a / b;
}

// ����������� ������� ���������� � �������
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < abs(exponent); ++i) {
        result *= base;
    }
    return (exponent < 0) ? 1.0 / result : result;
}
