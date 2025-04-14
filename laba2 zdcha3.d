#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double f;

    // Введення даних
    printf("Введіть значення цілого числа x: ");
    scanf("%d", &x);

    printf("Введіть значення цілого числа y: ");
    scanf("%d", &y);

    // Обчислення функції
    f = ((double)(x * x + y * y) / sqrt(x + y)) + ((double)(x - y) / (x * x));

    // Виведення результату
    printf("Результат обчислення функції f: %.4f\n", f);

    return 0;
}
