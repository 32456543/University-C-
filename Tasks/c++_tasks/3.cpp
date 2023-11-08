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

    int K, L;
    printf("Введите K, L: ");
    scanf("%d %d", &K, &L);
    int sum = 0;
    for (int i = K; i <= L; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum / (L - K + 1));

    return 0;
}
