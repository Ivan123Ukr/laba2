#include <stdio.h>

int main() {
    // Задані сталі величини
    int a = 2, b = 5, c = 8;
    
    // Обчислення значення виразу
    double numerator = (5 * a - b + c * c) + 1;
    double denominator = 2 + c;
    double y = numerator / denominator;
    
    // Виведення результату
    printf("Задані значення: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Обчислене значення функції y: %.2f\n", y);
    
    return 0;
}