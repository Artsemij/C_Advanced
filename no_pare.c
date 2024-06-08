#include <stdio.h>

int main() {
    int N, num, unique_num = 0;

    printf ("Введите число элементов последовательности: ");
    scanf("%d", &N);

    // Применяем операцию XOR ко всем элементам последовательности
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        unique_num ^= num;
    }

    // Выводим уникальное число
    printf("%d\n", unique_num);

    return 0;
}