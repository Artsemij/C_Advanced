#include <stdio.h>

int main() {
    int N;
    char symbol;

    printf ("Введите фразу для шифра: ");
    scanf("%d", &N);

    // Считываем символы и кодируем их шифром Цезаря
    while ((symbol = getchar()) != '.') {
        if (symbol >= 'a' && symbol <= 'z') {
            printf("%c", (symbol - 'a' + N) % 26 + 'a');
        } else if (symbol >= 'A' && symbol <= 'Z') {
            printf("%c", (symbol - 'A' + N) % 26 + 'A');
        } else {
            printf("%c", symbol);
        }
    }

    printf(".\n");

    return 0;
}