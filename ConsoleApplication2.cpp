#include <iostream>

using namespace std;

typedef double(*function)(double); // инициализируем новый тип для функции




double fucking_integral(function f, double a, double b, unsigned step_count) {
    double sum = .0, step;
    int i;
    if (0 == step_count) return sum;

    step = (b - a) / (1.0 * step_count);
    for (i = 1; i < step_count; ++i) {
        sum += f(a + i * step);
    }
    sum += (f(a) + f(b)) / 2;
    sum *= step;
    return sum;
}


double f(double x) {
    return 2*x+x*x; // подитегральное выражение
}

int main() {
    cout << "FUCKING INTEGRAL = " << fucking_integral(f, 0, 2, 3); // задаем подитегральное выражение, верхний и нижний пределы, количество интервалов разбиения.
}