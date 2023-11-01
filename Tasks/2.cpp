#include <stdio.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    int arr[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        printf("Элемент %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Вы ввели следующий массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Четные элементы массива: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Нечетные элементы массива: ");
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
