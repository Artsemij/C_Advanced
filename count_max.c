#include &lt;stdio.h&gt;
int main() {
int N, num, max_num, count_max_num;

// Вводим количество элементов в последовательности
printf("Введите количество элементов в последовательности: ");
scanf("%d", &N);

if (N > 0) {
// Считываем первое число и инициализируем переменные
scanf("%d", &max_num);
count_max_num = 1;

for (int i = 1; i < N; i++) {
// Считываем следующее число
scanf("%d", &num);

// Проверяем условие для определения максимального числа и его количества
if (num > max_num) {
max_num = num;
count_max_num = 1;
} else if (num == max_num) {
count_max_num++;
}
}

// Выводим количество вхождений максимального числа
printf("Количество вхождений максимального числа: %d\n", count_max_num);
}

return 0;
}
