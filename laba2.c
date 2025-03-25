#include <stdio.h>

int main() {
    int num1, num2;
    
    // Введення даних
    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);
    
    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);
    
    // Обчислення та виведення результатів
    printf("\nРезультати обчислень:\n");

    if (num2 != 0) {
        printf("1) Залишок від ділення %d на %d: %d\n", num1, num2, num1 % num2);
    } else {
        printf("1) Помилка: ділення на нуль неможливе!\n");
    }

    int difference_product = (num2 - num1) * (num1 - num2);
    int sum_of_cubes = (num1 * num1 * num1) + (num2 * num2 * num2);
    
    printf("2) (%d - %d) * (%d - %d) = %d\n", num2, num1, num1, num2, difference_product);
    printf("3) Сума кубів %d і %d: %d\n", num1, num2, sum_of_cubes);
    
    return 0;
}