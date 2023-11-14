#include <iostream>
#include <queue>

int main() {
    int n;
    std::cout << "Введите количество эл-ов в очереди: ";
    std::cin >> n;

    std::queue<int> q;

    std::cout << "введите элементы: ";
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        q.push(element);
    }

    int numElementsToPushFront;
    std::cout << "введите количество элементов, которые надо добавить в конец: ";
    std::cin >> numElementsToPushFront;

    std::cout << "Введите эти элементы: ";
    for (int i = 0; i < numElementsToPushFront; i++) {
        int element;
        std::cin >> element;
        q.push(element);
    }

    int numElementsToPopFront;
    std::cout << "Введите кол-во эл-ов, которые надо удалить из начала: ";
    std::cin >> numElementsToPopFront;

    for (int i = 0; i < numElementsToPopFront; i++) {
        q.pop();
    }

    std::cout << "Конечная очередь: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}
